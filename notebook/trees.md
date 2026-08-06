# Trees

## Definition
A tree is a hierarchical data structure that consists of nodes connected by edges. It is a special case of a graph with no cycles and is used to represent hierarchical relationships.

## Properties
- **Root**: The top node of the tree.
- **Leaf**: A node with no children.
- **Height**: The length of the longest path from the root to a leaf.
- **Depth**: The length of the path from the root to a specific node.
- **Subtree**: A tree consisting of a node and its descendants.

## Types of Trees
1. **Binary Tree**: Each node has at most two children.
2. **Binary Search Tree (BST)**: A binary tree where the left child is less than the parent and the right child is greater.
3. **Balanced Tree**: A tree where the height of the left and right subtrees of any node differ by at most one (e.g., AVL Tree, Red-Black Tree).
4. **N-ary Tree**: A tree where each node can have at most N children.
5. **Segment Tree**: A tree used for storing intervals or segments.

## Common Operations
- **Insertion**: Adding a new node to the tree.
- **Deletion**: Removing a node from the tree.
- **Traversal**: Visiting all the nodes in a specific order:
  - Pre-order: Root, Left, Right
  - In-order: Left, Root, Right
  - Post-order: Left, Right, Root
  - Level-order: Visit nodes level by level.

## Applications
- Hierarchical data representation (e.g., file systems).
- Efficient searching and sorting (e.g., binary search trees).
- Network routing algorithms.
- Parsing expressions (e.g., expression trees).

## Example
```cpp
struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}
```

## Conclusion
Trees are a fundamental data structure in computer science, providing efficient ways to store and manipulate hierarchical data. Understanding their properties and operations is crucial for solving various computational problems.