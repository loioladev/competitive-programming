
## Dynamic Programming with cycles

For a dp with cycles, we first need to create a Directed Acyclic Graph (DAG) in order to solve the problems.

### Minimum distance

We may be able to solve minimum distance paths in a graph with dp. To do this, let's look at the following code:

```
int f(int u){
    if (u == initial) return 0;
    if (mark[u]) return dp[u];
    int &ans = dp[u];
    ans = INF;
    for (auto [v, w] : gt[u]){
        ans = min(ans, f(v) + w);
    }
    return ans;
}
```

When the graph is not a DAG, but a DG, we may do a matrix dp to solve the problem. Moreover, if a path has a negative edge, it will not be possible to solve the problem.

