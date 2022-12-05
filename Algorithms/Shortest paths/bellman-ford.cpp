#include "../definitions.h"

int main(void){
    int n = 5;
    // Vector of distances
    vi distance (n);
    // Vector of edges to store {a, b, w}, meaning
    // there is an edge from node a to node b with weight w
    vector<tuple<int, int, int>> edges (n);
    // Initial node
    int x = 0;
    // Define all distances as infinity, except the initial one
    for (int i = 0; i < n; i++) 
        distance[i] = INTINF;
    distance[x] = 0;
    for (int i = 0; i < n - 1; i++){
        for (auto &e : edges){
            int a, b, w;
            // Define values of the edge
            tie(a, b, w) = e;
            // Compare which distance is the lowest
            distance[b] = min(distance[b], distance[a] + w);
        }
    }
    // A negative cycle can be detected by running
    // the algorithm for n rounds. If the last round 
    // reduces any distance, the graph contains a negative cycle.
    return 0;
}