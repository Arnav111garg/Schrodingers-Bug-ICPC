# Strings Manipulation in Competitive Programming

## Common String Operations

1. **Length of a String**
   - Use `s.length()` or `s.size()` to get the length of the string `s`.

2. **Accessing Characters**
   - Use `s[i]` to access the character at index `i`.

3. **Substring**
   - To get a substring, use `s.substr(start, length)`.

4. **Concatenation**
   - Use `s1 + s2` to concatenate two strings.

5. **Comparison**
   - Strings can be compared using relational operators (`<`, `>`, `==`, etc.).

## Useful Functions

- **Finding a Character**
  - `s.find(char)` returns the index of the first occurrence of `char` in `s`, or `std::string::npos` if not found.

- **Replacing a Character**
  - Use `std::replace(s.begin(), s.end(), old_char, new_char)` to replace all occurrences of `old_char` with `new_char`.

- **String to Integer Conversion**
  - Use `std::stoi(s)` to convert a string `s` to an integer.

- **Integer to String Conversion**
  - Use `std::to_string(num)` to convert an integer `num` to a string.

## String Algorithms

1. **KMP Algorithm** (Knuth-Morris-Pratt)
   - Used for substring searching in linear time.

2. **Rabin-Karp Algorithm**
   - A hashing-based algorithm for substring searching.

3. **Z Algorithm**
   - Used for pattern matching in linear time.

4. **Suffix Array**
   - A sorted array of all suffixes of a string, useful for various string problems.

5. **Trie**
   - A tree-like data structure that stores a dynamic set of strings, useful for prefix searching.

## Tips for Competitive Programming

- Always consider edge cases, such as empty strings or strings with special characters.
- Optimize string operations, especially in loops, to avoid time limit exceeded (TLE) errors.
- Familiarize yourself with the standard library functions for strings to save time during contests.

## Practice Problems

- Implement a function to check if a string is a palindrome.
- Write a program to find the longest common prefix among an array of strings.
- Solve problems involving anagrams and permutations of strings.