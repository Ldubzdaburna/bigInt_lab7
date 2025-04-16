#ifndef FRACTION_OPS_H
#define FRACTION_OPS_H

#include "bigint.h"
#include <utility>

using Fraction = std::pair<bigint, bigint>;

// Multiply two BigInt fractions: (a/b) * (c/d) = (a*c)/(b*d)
Fraction multiplyFractions(Fraction& a, Fraction& b) {
    bigint num = a.first * b.first;
    bigint den = a.second * b.second;
    return {num, den}; // Not simplified
}

// Add two BigInt fractions: (a/b) + (c/d) = (a*d + c*b)/(b*d)
Fraction addFractions(Fraction& a, Fraction& b) {
    bigint num1 = a.first * b.second;
    bigint num2 = b.first * a.second;
    bigint num = num1 + num2;
    bigint den = a.second * b.second;
    return {num, den}; // Not simplified
}

#endif
