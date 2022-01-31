// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWBinanceTestCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeBinanceTest));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("A93625C9F9ABEA1A8E31585B30BBB16C34FAE0D172EB5B6B2F834AF077BF06BB"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeBinanceTest, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("bnb1u7jm0cll5h3224y0tapwn6gf6pr49ytewx4gsz"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeBinanceTest, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeBinanceTest));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeBinanceTest));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeBinanceTest), 8);
    ASSERT_EQ(TWBlockchainBinance, TWCoinTypeBlockchain(TWCoinTypeBinanceTest));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeBinanceTest));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeBinanceTest));
    assertStringsEqual(symbol, "BNB");
    assertStringsEqual(txUrl, "https://explorer.binance.org/tx/A93625C9F9ABEA1A8E31585B30BBB16C34FAE0D172EB5B6B2F834AF077BF06BB");
    assertStringsEqual(accUrl, "https://explorer.binance.org/address/bnb1u7jm0cll5h3224y0tapwn6gf6pr49ytewx4gsz");
    assertStringsEqual(id, "binancetest");
    assertStringsEqual(name, "BNB");
}
