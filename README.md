# BigInt Fraction Operations Lab

This project demonstrates arithmetic operations on large fractions using a custom `bigint` class for high-precision integer math. The lab includes core logic, benchmarking, unit testing, and performance comparison.

---

## Project Files

- `main.cpp`: Runs a demo of `addFractions()` and `multiplyFractions()` using BigInts.
- `fraction_ops.h`: Implements fraction operations using BigInt and `std::pair`.
- `bigint.h`: Header-only custom BigInt class (Roshan Gupta version).
- `fraction_test.cpp`: Unit tests using the Doctest framework for validating arithmetic functions.
- `time_test.cpp`: Measures execution time of the BigInt-based fraction operations.
- `benchmark_compare.cpp`: Benchmarks and compares performance of `int`, `long int`, and `bigint`.

---

## How to Compile

### 1. Compile the main demo
```bash
g++ main.cpp -o main
./main
```

### 2. Compile unit tests (requires Doctest)
```bash
g++ fraction_test.cpp -o test
./test
```

### 3. Run time test
```bash
g++ time_test.cpp -o time_test
./time_test
```

### 4. Run benchmark comparison
```bash
g++ benchmark_compare.cpp -o benchmark
./benchmark
```

---

## Requirements

- C++11 or higher
- No external dependencies (Doctest is header-only)

---

## Output

- Console output showing fraction results
- Performance measurements in microseconds or nanoseconds
- Chart visualizations for timing differences (included separately)

---

## Author

Lab implemented for academic use — supports arbitrary-precision arithmetic and fractional benchmarking using custom BigInt logic.
