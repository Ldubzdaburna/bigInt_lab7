#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "include/doctest.h"
#include "fraction_ops.h"

// Test multiplyFractions with known BigInt values
TEST_CASE("multiplyFractions produces correct product") {
    Fraction f1 = {bigint("2"), bigint("3")};
    Fraction f2 = {bigint("4"), bigint("5")};
    Fraction result = multiplyFractions(f1, f2);
    CHECK(result.first == bigint("8"));
    CHECK(result.second == bigint("15"));
}

// Test addFractions with known BigInt values
TEST_CASE("addFractions produces correct sum") {
    Fraction f1 = {bigint("1"), bigint("2")};
    Fraction f2 = {bigint("1"), bigint("3")};
    Fraction result = addFractions(f1, f2);
    CHECK(result.first == bigint("5"));
    CHECK(result.second == bigint("6"));
}