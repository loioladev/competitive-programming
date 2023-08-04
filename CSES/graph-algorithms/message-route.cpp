#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;


void dijkstra(vector<vi>& adj, int n, int m){
    priority_queue<pii> q;
    vi processed(n);
    vi distance(n);
    vi parent(n);
    int x = 0;
    for (int i = 0; i < n; i++)
        distance[i] = INTINF;
    distance[x] = 0;
    q.push({0, x});
    parent[0] = -1;
    while(!q.empty()){
        int a = q.top().second; q.pop();
        if (processed[a]) continue;
        processed[a] = true;
        for (auto e : adj[a]){
            int b = e, w = 1;
            if (distance[a] + w < distance[b]){
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
                parent[b] = a;
            }
        }
    }
    cout << distance[n-1] + 1 << '\n';
    vi ans;
    int aux = n-1;
    while(parent[aux] != -1){
        ans.push_back(aux);
        aux = parent[aux];
    }
    ans.push_back(0);
    reverse(ans.begin(), ans.end());
    for (auto &e : ans)
        cout << e + 1 << ' ';
    cout << '\n';
    return;
}

void control(){
    int n, m;
    cin >> n >> m;
    vector<vi> conn(n, vi{});
    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        a--,b--;
        conn[a].push_back(b);
        conn[b].push_back(a);
    }
    // Verify if it is possible

    queue<int> q;
    q.push(0);
    vi visited(n);
    bool found = false;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        if (visited[tmp])
            continue;
        visited[tmp] = true;
        if (tmp == n-1){
            found = true;
            break;
        }
        for (auto &e : conn[tmp])
            q.push(e);
    }

    if (!found){
        cout << "IMPOSSIBLE\n";
        return;
    }

    dijkstra(conn, n, m);

    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}