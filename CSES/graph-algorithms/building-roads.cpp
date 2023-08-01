#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

void bfs(vi& visited, vector<vi>& roads, int city) {
    queue<int> q;
    q.push(city);
    while(!q.empty()){
        int aux = q.front();
        q.pop();
        if (visited[aux])
            continue;
        visited[aux] = true;
        for (auto &e : roads[aux])
            q.push(e);
    }
}

void control(){
    int n, m;
    cin >> n >> m;
    vector<vi> roads(n, vi{});
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--, b--;
        roads[a].push_back(b);
        roads[b].push_back(a);
    }
    vi final_roads, visited(n);
    for (int i = 0; i < n; i++){
        if (visited[i])
            continue;
        bfs(visited, roads, i);
        final_roads.push_back(i);
    }

    cout << final_roads.size() - 1 << '\n';
    for (int i = 1; i < final_roads.size(); i++)
        cout << final_roads[i-1] + 1 << " " << final_roads[i] + 1 << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}