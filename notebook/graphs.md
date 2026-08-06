# Graph Theory Notes

## Basic Concepts
- **Graph**: A graph is a collection of nodes (vertices) and edges connecting pairs of nodes.
- **Directed Graph**: A graph where edges have a direction (from one vertex to another).
- **Undirected Graph**: A graph where edges do not have a direction.
- **Weighted Graph**: A graph where edges have weights (costs associated with traversing them).

## Terminology
- **Vertex (Node)**: A fundamental part of a graph.
- **Edge**: A connection between two vertices.
- **Path**: A sequence of edges that connects a sequence of vertices.
- **Cycle**: A path that starts and ends at the same vertex without traversing any edge more than once.
- **Connected Graph**: A graph where there is a path between every pair of vertices.
- **Tree**: A connected acyclic graph.

## Graph Representations
1. **Adjacency Matrix**: A 2D array where the cell at row i and column j indicates the presence (and possibly the weight) of an edge between vertices i and j.
2. **Adjacency List**: An array of lists where each list corresponds to a vertex and contains a list of its adjacent vertices.

## Common Algorithms
- **Depth-First Search (DFS)**: An algorithm for traversing or searching tree or graph data structures. It starts at the root (or an arbitrary node) and explores as far as possible along each branch before backtracking.
- **Breadth-First Search (BFS)**: An algorithm for traversing or searching tree or graph data structures. It starts at the root (or an arbitrary node) and explores all of the neighbor nodes at the present depth prior to moving on to nodes at the next depth level.
- **Dijkstra's Algorithm**: An algorithm for finding the shortest paths between nodes in a graph, which may represent, for example, road networks.
- **Kruskal's Algorithm**: An algorithm for finding the minimum spanning tree of a graph.

## Applications
- **Network Routing**: Used in computer networks to find the best path for data transmission.
- **Social Networks**: Analyzing connections and relationships between individuals.
- **Pathfinding**: Used in games and robotics to navigate through environments.

## Tips for Competitive Programming
- Always consider edge cases, such as disconnected graphs or graphs with cycles.
- Familiarize yourself with both representations of graphs (adjacency matrix and list) and know when to use each.
- Practice implementing common algorithms and understand their time and space complexities.