#include "../definitions.h"

#define NODES 5

void dfs(vector<vi>& adj, vector<bool>& visited, int s){
    if (visited[s]) return;
    visited[s] = true;
    // process node s
    for (auto e : adj[s]){
        dfs(adj, visited, e);
    }
}

int main(void){
    // The graph is stored in an adjacent list
    vector<vi> adj (NODES, vi ());
    // Array to maintain the visited nodes
    vector<bool> visited (NODES);

    dfs(adj, visited, 0);

    return 0;
}