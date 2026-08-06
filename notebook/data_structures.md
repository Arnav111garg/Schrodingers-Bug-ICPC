# Data Structures Notes

## 1. Arrays
- **Definition**: A collection of elements identified by index or key.
- **Time Complexity**:
  - Access: O(1)
  - Search: O(n)
  - Insertion: O(n)
  - Deletion: O(n)

## 2. Linked Lists
- **Definition**: A linear collection of data elements where the linear order is not given by their physical placement in memory.
- **Types**:
  - Singly Linked List
  - Doubly Linked List
  - Circular Linked List
- **Time Complexity**:
  - Access: O(n)
  - Search: O(n)
  - Insertion: O(1) (at head)
  - Deletion: O(1) (at head)

## 3. Stacks
- **Definition**: A collection of elements that follows the Last In First Out (LIFO) principle.
- **Operations**:
  - Push: Add an item to the top.
  - Pop: Remove the item from the top.
- **Time Complexity**:
  - Push: O(1)
  - Pop: O(1)

## 4. Queues
- **Definition**: A collection of elements that follows the First In First Out (FIFO) principle.
- **Types**:
  - Simple Queue
  - Circular Queue
  - Priority Queue
- **Time Complexity**:
  - Enqueue: O(1)
  - Dequeue: O(1)

## 5. Hash Tables
- **Definition**: A data structure that implements an associative array abstract data type, a structure that can map keys to values.
- **Time Complexity**:
  - Average Case: O(1) for search, insert, and delete.
  - Worst Case: O(n) (when all keys hash to the same index).

## 6. Trees
- **Definition**: A hierarchical data structure consisting of nodes, with a single node as the root and sub-nodes as children.
- **Types**:
  - Binary Tree
  - Binary Search Tree (BST)
  - AVL Tree
  - Red-Black Tree
- **Time Complexity**:
  - Search: O(log n) for balanced trees
  - Insertion: O(log n) for balanced trees
  - Deletion: O(log n) for balanced trees

## 7. Graphs
- **Definition**: A collection of nodes (vertices) and edges connecting some or all of them.
- **Representations**:
  - Adjacency Matrix
  - Adjacency List
- **Time Complexity**:
  - Adding a vertex: O(1)
  - Adding an edge: O(1) (in adjacency list)
  - Searching: O(V + E) for adjacency list

## 8. Heaps
- **Definition**: A special tree-based data structure that satisfies the heap property.
- **Types**:
  - Min-Heap
  - Max-Heap
- **Time Complexity**:
  - Insert: O(log n)
  - Delete: O(log n)
  - Access Min/Max: O(1)

## Conclusion
Understanding these data structures is crucial for efficient algorithm design and problem-solving in competitive programming.