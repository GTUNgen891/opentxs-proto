/************************************************************
 *
 *                 OPEN TRANSACTIONS
 *
 *       Financial Cryptography and Digital Cash
 *       Library, Protocol, API, Server, CLI, GUI
 *
 *       -- Anonymous Numbered Accounts.
 *       -- Untraceable Digital Cash.
 *       -- Triple-Signed Receipts.
 *       -- Cheques, Vouchers, Transfers, Inboxes.
 *       -- Basket Currencies, Markets, Payment Plans.
 *       -- Signed, XML, Ricardian-style Contracts.
 *       -- Scripted smart contracts.
 *
 *  EMAIL:
 *  fellowtraveler@opentransactions.org
 *
 *  WEBSITE:
 *  http://www.opentransactions.org/
 *
 *  -----------------------------------------------------
 *
 *   LICENSE:
 *   This Source Code Form is subject to the terms of the
 *   Mozilla Public License, v. 2.0. If a copy of the MPL
 *   was not distributed with this file, You can obtain one
 *   at http://mozilla.org/MPL/2.0/.
 *
 *   DISCLAIMER:
 *   This program is distributed in the hope that it will
 *   be useful, but WITHOUT ANY WARRANTY; without even the
 *   implied warranty of MERCHANTABILITY or FITNESS FOR A
 *   PARTICULAR PURPOSE.  See the Mozilla Public License
 *   for more details.
 *
 ************************************************************/

#include "opentxs-proto/verify/CredentialIndex.hpp"
#include "opentxs-proto/verify/PeerObject.hpp"

#include <iostream>

namespace opentxs { namespace proto
{

bool CheckProto_1(
    const PeerObject& peerObject)
{
    if (!peerObject.has_type()) {
        std::cerr << "Verify peer object failed: missing type." << std::endl;

        return false;
    }

    if ((peerObject.type() < PEEROBJECT_MESSAGE) ||
        (peerObject.type() > PEEROBJECT_RESPONSE)) {
            std::cerr << "Verify peer object failed: invalid type."
                      << std::endl;

            return false;
    }

    switch (peerObject.type()) {
        case PEEROBJECT_MESSAGE : {
            if (!peerObject.has_otmessage()) {
                std::cerr << "Verify peer object failed: missing otmessage."
                          << std::endl;

                return false;
            }

            if (peerObject.has_otrequest()) {
                std::cerr << "Verify peer object failed: otrequest not empty."
                          << std::endl;

                return false;
            }

            if (peerObject.has_otreply()) {
                std::cerr << "Verify peer object failed: otreply not empty."
                          << std::endl;

                return false;
            }

            break;
        }
        case PEEROBJECT_REQUEST : {
            if (!peerObject.has_otrequest()) {
                std::cerr << "Verify peer object failed: missing otrequest."
                          << std::endl;

                return false;
            }

            const bool validrequest = Check(
                peerObject.otrequest(),
                PeerObjectAllowedRequest.at(peerObject.version()).first,
                PeerObjectAllowedRequest.at(peerObject.version()).second);

            if (!validrequest) {
                std::cerr << "Verify peer object failed: invalid otrequest."
                          << std::endl;

                return false;
            }

            if (!peerObject.has_nym()) {
                std::cerr << "Verify peer object failed: missing nym."
                          << std::endl;

                return false;
            }

            const bool validnym = Check(
                peerObject.nym(),
                PeerObjectAllowedNym.at(peerObject.version()).first,
                PeerObjectAllowedNym.at(peerObject.version()).second);

            if (!validnym) {
                std::cerr << "Verify peer object failed: invalid nym."
                          << std::endl;

                return false;
            }

            if (peerObject.has_otmessage()) {
                std::cerr << "Verify peer object failed: otmessage not empty."
                          << std::endl;

                return false;
            }

            if (peerObject.has_otreply()) {
                std::cerr << "Verify peer object failed: otreply not empty."
                          << std::endl;

                return false;
            }

            break;
        }
        case PEEROBJECT_RESPONSE : {
            if (!peerObject.has_otrequest()) {
                std::cerr << "Verify peer object failed: missing otrequest."
                          << std::endl;

                return false;
            }

            const bool validrequest = Check(
                peerObject.otrequest(),
                PeerObjectAllowedRequest.at(peerObject.version()).first,
                PeerObjectAllowedRequest.at(peerObject.version()).second);

            if (!validrequest) {
                std::cerr << "Verify peer object failed: invalid otrequest."
                          << std::endl;

                return false;
            }

            if (!peerObject.has_otreply()) {
                std::cerr << "Verify peer object failed: missing otreply."
                          << std::endl;

                return false;
            }

            const bool validreply = Check(
                peerObject.otreply(),
                PeerObjectAllowedReply.at(peerObject.version()).first,
                PeerObjectAllowedReply.at(peerObject.version()).second);

            if (!validreply) {
                std::cerr << "Verify peer object failed: invalid otreply."
                          << std::endl;

                return false;
            }

            const bool matchingID =
                (peerObject.otrequest().id() == peerObject.otreply().cookie());

            if (!matchingID) {
                std::cerr << "Verify peer object failed: reply cookie does not "
                          << "match request id." << std::endl;

                return false;
            }

            const bool matchingtype =
                (peerObject.otrequest().type() == peerObject.otreply().type());

            if (!matchingtype) {
                std::cerr << "Verify peer object failed: reply type does not "
                          << "match request type." << std::endl;

                return false;
            }

            const bool matchingInitiator =
                (peerObject.otrequest().initiator() ==
                 peerObject.otreply().initiator());

            if (!matchingInitiator) {
                std::cerr << "Verify peer object failed: reply initiator does "
                          << "not match request initiator." << std::endl;

                return false;
            }

            const bool matchingRecipient =
                (peerObject.otrequest().recipient() ==
                 peerObject.otreply().recipient());

            if (!matchingRecipient) {
                std::cerr << "Verify peer object failed: reply recipient does "
                          << "not match request recipient." << std::endl;

                return false;
            }

            if (peerObject.has_otmessage()) {
                std::cerr << "Verify peer object failed: otmessage not empty."
                          << std::endl;

                return false;
            }

            break;
        }
        default : {}
    }

    return true;
}
bool CheckProto_2(const PeerObject&) { return false; }
} // namespace proto
} // namespace opentxs
