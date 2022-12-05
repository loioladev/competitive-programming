#include "../definitions.h"

int main(){
    int n = 5;
    // Queue to store the nodes in 
    // increasing order of distance
    queue<int> q;
    // The graph is stored in an adjacent list
    vector<vi> adj (n, vi ());
    // Array to maintain the visited nodes
    vector<bool> visited (n);
    // Store the distances of the nodes
    vi distance (n);

    int x = 0;
    visited[x] = 0;
    distance[x] = 0;
    q.push(x);
    while(!q.empty()){
        int s = q.front(); q.pop();
        // process node s
        for (auto e : adj[s]){
            if (visited[e]) continue;
            visited[e] = true;
            distance[e] = distance[s] + 1;
            q.push(e);
        }
    }
}