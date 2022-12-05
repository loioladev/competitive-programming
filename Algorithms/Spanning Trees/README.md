# Spanning trees

A spanning tree of a graph consists of all nodes of the graph and some of the edges of the graph so that there is a path between any two nodes. Like trees in general, spanning trees are connected and acyclic.

The weight of a spanning tree is the sum of its edge weights. A minimum spanning tree is a spanning tree whose weight is as small as possible.

## Kruskal's algorithm

In Kruskal’s algorithm1 , the initial spanning tree only contains the nodes of the graph and does not contain any edges. Then the algorithm goes through the edges ordered by their weights, and always adds an edge to the tree if it does not create a cycle.

When implementing Kruskal’s algorithm, it is convenient to use the edge list representation of the graph. However, we need to use the Union-find structure to optimize the time complexity of Kruskal’s algorithm, so it will be O(mlog(n)) after sorting the edge list.

+ Union-find: In a union-find structure, one element in each set is the representative of the set, and there is a chain from any other element of the set to the representative.

## Prim's algorithm

Prim’s algorithm is an alternative method for finding a minimum spanning tree. The algorithm first adds an arbitrary node to the tree. After this, the algorithm always chooses a minimum-weight edge that adds a new node to the tree. Finally, all nodes have been added to the tree and a minimum spanning tree has been found.

The time complexity of Prim’s algorithm is O(n + mlogm)