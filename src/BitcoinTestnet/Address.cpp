// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#include "Address.h"

using namespace TW::BitcoinTestnet;

bool Address::isValid(const std::string& string) {
    // TODO: Finalize implementation
    return false;
}

Address::Address(const std::string& string) {
    // TODO: Finalize implementation

    if (!isValid(string)) {
        throw std::invalid_argument("Invalid address string");
    }
}

Address::Address(const PublicKey& publicKey) {
    // TODO: Finalize implementation
}

std::string Address::string() const {
    // TODO: Finalize implementation
    return "TODO";
}
