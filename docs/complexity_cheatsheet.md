# Complexity Cheatsheet

## Time Complexities

| Algorithm/Operation                | Best Case | Average Case | Worst Case | Space Complexity |
|------------------------------------|-----------|--------------|------------|------------------|
| Access (Array)                     | O(1)      | O(1)         | O(1)       | O(1)             |
| Search (Unsorted Array)            | O(1)      | O(n)         | O(n)       | O(1)             |
| Search (Sorted Array)              | O(1)      | O(log n)     | O(log n)   | O(1)             |
| Insertion (Array)                  | O(n)      | O(n)         | O(n)       | O(1)             |
| Deletion (Array)                   | O(n)      | O(n)         | O(n)       | O(1)             |
| Access (Linked List)               | O(1)      | O(n)         | O(n)       | O(1)             |
| Search (Linked List)               | O(1)      | O(n)         | O(n)       | O(1)             |
| Insertion (Linked List)            | O(1)      | O(1)         | O(1)       | O(1)             |
| Deletion (Linked List)             | O(1)      | O(n)         | O(n)       | O(1)             |
| Quick Sort                          | O(n log n)| O(n log n)   | O(n^2)     | O(log n)         |
| Merge Sort                          | O(n log n)| O(n log n)   | O(n log n) | O(n)             |
| Bubble Sort                         | O(n)      | O(n^2)       | O(n^2)     | O(1)             |
| Selection Sort                      | O(n^2)    | O(n^2)       | O(n^2)     | O(1)             |
| Heap Sort                           | O(n log n)| O(n log n)   | O(n log n) | O(1)             |

## Space Complexities

| Data Structure                      | Space Complexity |
|-------------------------------------|------------------|
| Array                               | O(n)             |
| Linked List                         | O(n)             |
| Stack                               | O(n)             |
| Queue                               | O(n)             |
| Hash Table                          | O(n)             |
| Binary Tree                         | O(n)             |
| Graph (Adjacency List)             | O(V + E)         |
| Graph (Adjacency Matrix)           | O(V^2)           |

## Common Algorithms

- **Binary Search**: O(log n)
- **Dijkstra's Algorithm**: O((V + E) log V)
- **Floyd-Warshall Algorithm**: O(V^3)
- **Kruskal's Algorithm**: O(E log E)
- **Prim's Algorithm**: O(E log V)

## Notes

- Always consider both time and space complexity when analyzing algorithms.
- The complexities can vary based on the implementation and the specific use case.