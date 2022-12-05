#include "../definitions.h"

vi visited;
vector<vi> adj;

// Te reverse of the queue is the topological sort
void dfs(int s, queue<int>& q){
    visited[s] = true;
    for (auto u : adj[s]){
        if (visited[u]) continue;
        dfs(u, q);
    }
    q.push(s);
}
