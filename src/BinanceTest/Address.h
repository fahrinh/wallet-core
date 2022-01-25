// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../Data.h"
#include "../PublicKey.h"

#include <string>

namespace TW::BinanceTest {

class Address {
  public:
    // TODO: Complete class definition

    /// Determines whether a string makes a valid address.
    static bool isValid(const std::string& string);

    /// Initializes a BinanceTest address with a string representation.
    explicit Address(const std::string& string);

    /// Initializes a BinanceTest address with a public key.
    explicit Address(const PublicKey& publicKey);

    /// Returns a string representation of the address.
    std::string string() const;
};

inline bool operator==(const Address& lhs, const Address& rhs) {
    // TODO: Complete equality operator
    return true;
}

} // namespace TW::BinanceTest

/// Wrapper for C interface.
struct TWBinanceTestAddress {
    TW::BinanceTest::Address impl;
};
