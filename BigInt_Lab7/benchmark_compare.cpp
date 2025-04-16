#include <iostream>
#include <chrono>
#include "bigint.h"

using namespace std;
using namespace std::chrono;

int main() {
    constexpr int iterations = 1000000;

    // Benchmark int
    int a_int = 123456789;
    int b_int = 987654321;
    auto start_int_add = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i)
        volatile int result = a_int + b_int;
    auto end_int_add = high_resolution_clock::now();

    auto start_int_mul = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i)
        volatile int result = a_int * b_int;
    auto end_int_mul = high_resolution_clock::now();

    // Benchmark long
    long a_long = 123456789L;
    long b_long = 987654321L;
    auto start_long_add = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i)
        volatile long result = a_long + b_long;
    auto end_long_add = high_resolution_clock::now();

    auto start_long_mul = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i)
        volatile long result = a_long * b_long;
    auto end_long_mul = high_resolution_clock::now();

    // Benchmark bigint
    bigint a_big("123456789123456789123456789");
    bigint b_big("987654321987654321987654321");
    auto start_big_add = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i)
        volatile bigint result = a_big + b_big;
    auto end_big_add = high_resolution_clock::now();

    auto start_big_mul = high_resolution_clock::now();
    for (int i = 0; i < iterations; ++i)
        volatile bigint result = a_big * b_big;
    auto end_big_mul = high_resolution_clock::now();

    // Compute average times
    auto int_add_time = duration_cast<nanoseconds>(end_int_add - start_int_add).count() / iterations;
    auto int_mul_time = duration_cast<nanoseconds>(end_int_mul - start_int_mul).count() / iterations;
    auto long_add_time = duration_cast<nanoseconds>(end_long_add - start_long_add).count() / iterations;
    auto long_mul_time = duration_cast<nanoseconds>(end_long_mul - start_long_mul).count() / iterations;
    auto big_add_time = duration_cast<nanoseconds>(end_big_add - start_big_add).count() / iterations;
    auto big_mul_time = duration_cast<nanoseconds>(end_big_mul - start_big_mul).count() / iterations;

    // Output results
    cout << "int add: " << int_add_time << " ns\n";
    cout << "int mul: " << int_mul_time << " ns\n";
    cout << "long add: " << long_add_time << " ns\n";
    cout << "long mul: " << long_mul_time << " ns\n";
    cout << "bigint add: " << big_add_time << " ns\n";
    cout << "bigint mul: " << big_mul_time << " ns\n";

    return 0;
}
