// Copyright (c) 2018 The Open-Transactions developers
// This Source Code Form is subject to the terms of the Mozilla Public
// License, v. 2.0. If a copy of the MPL was not distributed with this
// file, You can obtain one at http://mozilla.org/MPL/2.0/.

#include "opentxs-proto/Types.hpp"
#include "opentxs-proto/Check.hpp"

#define PROTO_NAME "create instrument definition"

namespace opentxs
{
namespace proto
{
bool CheckProto_1(const CreateInstrumentDefinition& input, const bool silent)
{
    CHECK_NAME(name);
    CHECK_NAME(symbol);
    CHECK_NAME(primaryunitname);
    CHECK_NAME(fractionalunitname);
    CHECK_NAME(tla);
    CHECK_NAME(name);

    const auto allowedtype =
        1 == AllowedItemTypes.at({5, CONTACTSECTION_CONTRACT})
                 .count(input.unitofaccount());

    if (false == allowedtype) { FAIL_1("Invalid unit of account") }

    return true;
}

bool CheckProto_2(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(2)
}

bool CheckProto_3(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(3)
}

bool CheckProto_4(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(4)
}

bool CheckProto_5(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(5)
}

bool CheckProto_6(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(6)
}

bool CheckProto_7(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(7)
}

bool CheckProto_8(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(8)
}

bool CheckProto_9(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(9)
}

bool CheckProto_10(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(10)
}

bool CheckProto_11(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(11)
}

bool CheckProto_12(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(12)
}

bool CheckProto_13(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(13)
}

bool CheckProto_14(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(14)
}

bool CheckProto_15(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(15)
}

bool CheckProto_16(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(16)
}

bool CheckProto_17(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(17)
}

bool CheckProto_18(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(18)
}

bool CheckProto_19(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(19)
}

bool CheckProto_20(const CreateInstrumentDefinition& input, const bool silent)
{
    UNDEFINED_VERSION(20)
}
}  // namespace proto
}  // namespace opentxs
