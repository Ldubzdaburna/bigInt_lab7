#include <iostream>
#include "fraction_ops.h"

int main() {
    Fraction f1 = {bigint("123456789123456789"), bigint("987654321987654321")};
    Fraction f2 = {bigint("111111111111111111"), bigint("222222222222222222")};

    Fraction prod = multiplyFractions(f1, f2);
    std::cout << "Product: " << prod.first << " / " << prod.second << std::endl;

    Fraction sum = addFractions(f1, f2);
    std::cout << "Sum: " << sum.first << " / " << sum.second << std::endl;

    return 0;
}
