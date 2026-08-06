# Combinatorics Notes

## Basic Concepts

1. **Factorial**: The factorial of a non-negative integer n, denoted as n!, is the product of all positive integers less than or equal to n.
   - Formula: n! = n × (n-1) × (n-2) × ... × 1
   - Example: 5! = 5 × 4 × 3 × 2 × 1 = 120

2. **Binomial Coefficient**: The number of ways to choose k elements from a set of n elements, denoted as C(n, k) or "n choose k".
   - Formula: C(n, k) = n! / (k! × (n-k)!)
   - Example: C(5, 2) = 5! / (2! × 3!) = 10

3. **Combinations**: The selection of items from a larger pool where the order does not matter.
   - Example: Choosing 2 fruits from {apple, banana, cherry} gives combinations: {apple, banana}, {apple, cherry}, {banana, cherry}.

4. **Permutations**: The arrangement of items where the order matters.
   - Formula: P(n, k) = n! / (n-k)!
   - Example: Arranging 3 letters from {A, B, C} gives permutations: ABC, ACB, BAC, BCA, CAB, CBA.

## Important Theorems

1. **Pascal's Triangle**: Each number is the sum of the two directly above it.
   - C(n, k) = C(n-1, k-1) + C(n-1, k)

2. **Inclusion-Exclusion Principle**: Used to calculate the size of the union of multiple sets.
   - |A ∪ B| = |A| + |B| - |A ∩ B|

## Common Formulas

- **Sum of First n Natural Numbers**: S = n(n + 1) / 2
- **Sum of Squares of First n Natural Numbers**: S = n(n + 1)(2n + 1) / 6
- **Sum of Cubes of First n Natural Numbers**: S = (n(n + 1) / 2)²

## Applications

- Counting problems in combinatorics are widely used in probability, statistics, and algorithm design.
- Understanding combinatorial principles is crucial for solving problems in competitive programming and contests like ICPC.

## Practice Problems

1. Calculate the number of ways to arrange 5 books on a shelf.
2. How many ways can you choose 3 students from a class of 10?
3. Solve problems involving combinations and permutations from previous ICPC contests.