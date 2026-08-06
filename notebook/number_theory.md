# Number Theory Notes

## Basic Concepts
- **Natural Numbers**: The set of positive integers (1, 2, 3, ...).
- **Integers**: The set of whole numbers, including negative numbers (..., -3, -2, -1, 0, 1, 2, 3, ...).
- **Prime Numbers**: A natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers. Examples: 2, 3, 5, 7, 11, ...

## Important Theorems
- **Fundamental Theorem of Arithmetic**: Every integer greater than 1 can be uniquely factored into prime numbers.
- **Euclid's Theorem**: There are infinitely many prime numbers.

## Common Algorithms
- **Sieve of Eratosthenes**: An efficient algorithm to find all prime numbers up to a specified integer.
- **Greatest Common Divisor (GCD)**: The largest positive integer that divides two or more integers without leaving a remainder. Can be computed using the Euclidean algorithm.

## Modular Arithmetic
- **Definition**: A system of arithmetic for integers, where numbers "wrap around" upon reaching a certain value (the modulus).
- **Properties**:
  - (a + b) mod m = [(a mod m) + (b mod m)] mod m
  - (a * b) mod m = [(a mod m) * (b mod m)] mod m

## Applications
- **Cryptography**: Many cryptographic algorithms rely on properties of prime numbers and modular arithmetic.
- **Combinatorics**: Number theory concepts are often used in counting problems and combinatorial identities.

## Useful Formulas
- **Fermat's Little Theorem**: If p is a prime number and a is an integer not divisible by p, then a^(p-1) ≡ 1 (mod p).
- **Chinese Remainder Theorem**: Provides a way to solve systems of simultaneous congruences with different moduli.

## Practice Problems
1. Find all prime numbers up to 100 using the Sieve of Eratosthenes.
2. Calculate the GCD of two numbers using the Euclidean algorithm.
3. Solve the following congruence: 3x ≡ 4 (mod 7).