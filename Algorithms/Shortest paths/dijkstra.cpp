#include "../definitions.h"

int main(void){
    int n = 5;
    vi distance (n);
    // The graph is stored as a adjacent vector
    // with a pair (b, w) that indicates when there 
    // is an edge from node a to node b with weight w.
    vector<vector<pii>> adj (n, vector<pii> ());
    // Priority queue for the nodes
    priority_queue<pii> q;
    // Vector to store the nodes processed
    vector<bool> processed (n);
    // Initial node
    int x = 0;
    for (int i = 0; i < n; i++)
        distance[i] = INTINF;
    distance[x] = 0;
    // Start the algorithm
    q.push({0, x});
    while(!q.empty()){
        // Get the weight
        int a = q.top().second; q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto e : adj[a]){
            int b = e.first, w = e.second;
            if (distance[a] + w < distance[b]){
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }

    }

    return 0;
}