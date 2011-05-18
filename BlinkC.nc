// $Id: BlinkC.nc,v 1.4 2006/12/12 18:22:48 vlahan Exp $

/*									tab:4
 * "Copyright (c) 2000-2005 The Regents of the University  of California.  
 * All rights reserved.
 *
 * Permission to use, copy, modify, and distribute this software and its
 * documentation for any purpose, without fee, and without written agreement is
 * hereby granted, provided that the above copyright notice, the following
 * two paragraphs and the author appear in all copies of this software.
 * 
 * IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES ARISING OUT
 * OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN IF THE UNIVERSITY OF
 * CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
 * INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
 * AND FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS."
 *
 * Copyright (c) 2002-2003 Intel Corporation
 * All rights reserved.
 *
 * This file is distributed under the terms in the attached INTEL-LICENSE     
 * file. If you do not find these files, copies can be found by writing to
 * Intel Research Berkeley, 2150 Shattuck Avenue, Suite 1300, Berkeley, CA, 
 * 94704.  Attention:  Intel License Inquiry.
 */

#include "attestation.h"

module BlinkC {
  uses {
    interface Boot;

    interface SplitControl as AMControl;
    interface AMPacket;
    interface Packet;
    interface AMSend as AttestationResponseSend;
    interface Receive as AttestationRequestReceive;
  }
}

implementation {
  bool busy = FALSE;
  message_t message;

  event void Boot.booted() {
    call AMControl.start();
  }

  event void AMControl.startDone(error_t err) {
    if(err == SUCCESS) {
      // nothing
    } else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err) {
    // nothing
  }

  void sendAttestationResponse(uint32_t nonce) {
    uint64_t checksum;

    atomic {
      checksum = attestation(nonce);
    }

    if(!busy) {
      AttestationResponseMsg* response = (AttestationResponseMsg*)(call Packet.getPayload(&message, sizeof(AttestationResponseMsg)));

      response->nonce = nonce;
      response->checksum = checksum;

      if(call AttestationResponseSend.send(AM_BROADCAST_ADDR, &message, sizeof(AttestationResponseMsg)) == SUCCESS) {
        busy = TRUE;
      }
    }
  }

  event void AttestationResponseSend.sendDone(message_t* msg, error_t error) {
    if(&message == msg) {
      busy = FALSE;
    }
  }

  event message_t* AttestationRequestReceive.receive(message_t* msg, void* payload, uint8_t len) {
    AttestationRequestMsg* in = (AttestationRequestMsg*)payload;

    sendAttestationResponse(in->nonce);

    return msg;
  }
}

