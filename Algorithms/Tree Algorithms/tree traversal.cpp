// The parameter 'e' is to avoid the dfs
// to search in visited nodes
void dfs(int s, int e){
    // process node s
    for (auto &u : adj[s]){
        if (u != e) dfs(u, s);
    }
}