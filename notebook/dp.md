# Dynamic Programming

Dynamic Programming (DP) is a powerful technique used in algorithm design to solve problems by breaking them down into simpler subproblems. It is particularly useful for optimization problems where the solution can be constructed efficiently from solutions to subproblems.

## Key Concepts

1. **Optimal Substructure**: A problem exhibits optimal substructure if an optimal solution to the problem contains optimal solutions to its subproblems.

2. **Overlapping Subproblems**: A problem has overlapping subproblems if it can be broken down into subproblems which are reused several times.

## Common Techniques

- **Memoization**: This is a top-down approach where you solve the problem recursively and store the results of subproblems to avoid redundant calculations.

- **Tabulation**: This is a bottom-up approach where you solve all possible subproblems and store their results in a table (usually an array) to build up the solution to the original problem.

## Example Problems

1. **Fibonacci Sequence**: Calculate the nth Fibonacci number using DP.
2. **Knapsack Problem**: Given weights and values of items, determine the maximum value that can be carried in a knapsack of a given capacity.
3. **Longest Common Subsequence**: Find the longest subsequence present in two sequences.

## Resources

- [Dynamic Programming on GeeksforGeeks](https://www.geeksforgeeks.org/fundamentals-of-algorithms/#DynamicProgramming)
- [Introduction to Dynamic Programming](https://www.coursera.org/learn/algorithms-part1)

## Tips for Solving DP Problems

- Identify if the problem can be solved using DP.
- Define the state and the state transition.
- Decide between memoization and tabulation based on the problem structure.
- Start with simple examples to build intuition before tackling more complex cases.