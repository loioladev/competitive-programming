# Tree algorithms

## Tree traversal

General graph traversal algorithms can be used to traverse the nodes of a tree. However, the traversal of a tree is easier to implement than that of a general graph, because there are no cycles in the tree and it is not possible to reach a node from multiple directions.

## Dynamic Programming

Dynamic programming can be used to calculate some information during a tree traversal. Using dynamic programming, we can, for example, calculate in O(n) time for each node of a rooted tree the number of nodes in its subtree or the length of the longest path from the node to a leaf.

## Diameter

The diameter of a tree is the maximum length of a path between two nodes. An efficient way to calculate the diameter of a tree is based on two depth-first searches. First, we choose an arbitrary node a in the tree and find the farthest node b from a. Then, we find the farthest node c from b. The diameter of the tree is the distance between b and c.

## Segment Tree