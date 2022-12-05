# Directed graphs

+ Acyclic graphs: There are no cycles in the graph, so there is no path from any node to itself.
+ Successor graphs: The outdegree of each node is 1, so each node has a unique successor.

## Topological sorting

A topological sort is an ordering of the nodes of a directed graph such that if there is a path from node a to node b, then node a appears before node b in the ordering.

An acyclic graph always has a topological sort. However, if the graph contains a cycle, it is not possible to form a topological sort, because no node of the cycle can appear before the other nodes of the cycle in the ordering.

## Successor paths

Successor graphs are sometimes called functional graphs. The reason for this is that any successor graph corresponds to a function that defines the edges of the graph.

In those graphs, the outdegree of each node is 1, i.e., exactly one edge starts at each node. A successor graph consists of one or more components, each of which contains one cycle and some paths that lead to it.

