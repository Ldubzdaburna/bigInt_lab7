#include <iostream>
#include <chrono>
#include "fraction_ops.h"

using namespace std;
using namespace std::chrono;

int main() {
    Fraction f1 = {bigint("123456789123456789123456789"), bigint("987654321987654321987654321")};
    Fraction f2 = {bigint("111111111111111111111111111"), bigint("222222222222222222222222222")};

    // Measure time for multiplication
    auto start_mul = high_resolution_clock::now();
    Fraction prod = multiplyFractions(f1, f2);
    auto stop_mul = high_resolution_clock::now();
    auto duration_mul = duration_cast<microseconds>(stop_mul - start_mul);
    cout << "Product: " << prod.first << " / " << prod.second << endl;
    cout << "Time taken by multiplyFractions: " << duration_mul.count() << " microseconds" << endl;

    // Measure time for addition
    auto start_add = high_resolution_clock::now();
    Fraction sum = addFractions(f1, f2);
    auto stop_add = high_resolution_clock::now();
    auto duration_add = duration_cast<microseconds>(stop_add - start_add);
    cout << "Sum: " << sum.first << " / " << sum.second << endl;
    cout << "Time taken by addFractions: " << duration_add.count() << " microseconds" << endl;

    return 0;
}
