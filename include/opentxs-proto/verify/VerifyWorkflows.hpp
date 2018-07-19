// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef OPENTXS_PROTO_VERIFYWORKFLOWS_HPP
#define OPENTXS_PROTO_VERIFYWORKFLOWS_HPP

#include "opentxs-proto/Basic.hpp"

#include <cstdint>
#include <map>
#include <set>
#include <tuple>

namespace opentxs
{
namespace proto
{
typedef std::pair<std::uint32_t, PaymentWorkflowType> PaymentWorkflowVersion;
typedef std::map<PaymentWorkflowVersion, std::set<PaymentEventType>>
    WorkflowEventMap;
typedef std::pair<std::uint32_t, PaymentWorkflowType> PaymentTypeVersion;
typedef std::map<PaymentTypeVersion, std::set<PaymentWorkflowState>>
    WorkflowStateMap;
typedef std::pair<std::uint32_t, PaymentEventType> PaymentEventVersion;
typedef std::map<PaymentEventVersion, std::set<EventTransportMethod>>
    EventTransportMap;

static const EventTransportMap PaymentEventAllowedTransportMethod = {
    {{1, PAYMENTEVENTTYPE_CREATE}, {TRANSPORTMETHOD_NONE, TRANSPORTMETHOD_OT}},
    {{1, PAYMENTEVENTTYPE_CONVEY}, {TRANSPORTMETHOD_OT, TRANSPORTMETHOD_OOB}},
    {{1, PAYMENTEVENTTYPE_CANCEL}, {TRANSPORTMETHOD_OT}},
    {{1, PAYMENTEVENTTYPE_ACCEPT}, {TRANSPORTMETHOD_OT}},
    {{1, PAYMENTEVENTTYPE_COMPLETE}, {TRANSPORTMETHOD_OT}},
};

static const WorkflowEventMap PaymentWorkflowAllowedEventTypes = {
    {{1, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
     {PAYMENTEVENTTYPE_CREATE,
      PAYMENTEVENTTYPE_CONVEY,
      PAYMENTEVENTTYPE_CANCEL,
      PAYMENTEVENTTYPE_ACCEPT,
      PAYMENTEVENTTYPE_COMPLETE}},
    {{1, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
     {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
    {{1, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
     {PAYMENTEVENTTYPE_CREATE,
      PAYMENTEVENTTYPE_CONVEY,
      PAYMENTEVENTTYPE_CANCEL,
      PAYMENTEVENTTYPE_ACCEPT,
      PAYMENTEVENTTYPE_COMPLETE}},
    {{1, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
     {PAYMENTEVENTTYPE_CONVEY, PAYMENTEVENTTYPE_ACCEPT}},
};

static const WorkflowStateMap PaymentWorkflowAllowedState = {
    {{1, PAYMENTWORKFLOWTYPE_OUTGOINGCHEQUE},
     {PAYMENTWORKFLOWSTATE_UNSENT,
      PAYMENTWORKFLOWSTATE_CONVEYED,
      PAYMENTWORKFLOWSTATE_CANCELLED,
      PAYMENTWORKFLOWSTATE_ACCEPTED,
      PAYMENTWORKFLOWSTATE_COMPLETED,
      PAYMENTWORKFLOWSTATE_EXPIRED}},
    {{1, PAYMENTWORKFLOWTYPE_INCOMINGCHEQUE},
     {PAYMENTWORKFLOWSTATE_CONVEYED,
      PAYMENTWORKFLOWSTATE_COMPLETED,
      PAYMENTWORKFLOWSTATE_EXPIRED}},
    {{1, PAYMENTWORKFLOWTYPE_OUTGOINGINVOICE},
     {PAYMENTWORKFLOWSTATE_UNSENT,
      PAYMENTWORKFLOWSTATE_CONVEYED,
      PAYMENTWORKFLOWSTATE_CANCELLED,
      PAYMENTWORKFLOWSTATE_ACCEPTED,
      PAYMENTWORKFLOWSTATE_COMPLETED,
      PAYMENTWORKFLOWSTATE_EXPIRED}},
    {{1, PAYMENTWORKFLOWTYPE_INCOMINGINVOICE},
     {PAYMENTWORKFLOWSTATE_CONVEYED,
      PAYMENTWORKFLOWSTATE_COMPLETED,
      PAYMENTWORKFLOWSTATE_EXPIRED}},
};

static const VersionMap PaymentWorkflowAllowedInstrumentRevision = {
    {1, {1, 1}},
};
static const VersionMap PaymentWorkflowAllowedPaymentEvent = {
    {1, {1, 1}},
};
}  // namespace proto
}  // namespace opentxs
#endif  // OPENTXS_PROTO_VERIFYWORKFLOWS_HPP
