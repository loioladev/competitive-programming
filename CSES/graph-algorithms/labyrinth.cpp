#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

void control(){
    int n, m;
    cin >> n >> m;
    vector<string> a(n);
    for (auto &e : a)
        cin >> e;

    pii start, end;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] == 'A'){
                start = {i, j};
                a[i][j] = '.';
            }
            if (a[i][j] == 'B'){
                end = {i, j};
                a[i][j] = '.';
            }
        }
    }

    queue<pii> q;
    vector<vector<char>> parent_char(n, vector<char>(m));
    vector<vector<pii>> parent(n, vector<pii>(m));
    parent_char[start.first][start.second] = '-';
    q.push(start);
    while(!q.empty()){
        int x = q.front().first, y = q.front().second;
        q.pop();
        if (a[x][y] == '$')
            continue;
        a[x][y] = '$';
        if (x + 1 < n && a[x+1][y] == '.'){
            parent[x+1][y] = {x, y};
            q.push({x+1, y});
            parent_char[x+1][y] = 'D';
        }
        if (y + 1 < m && a[x][y+1] == '.'){
            parent[x][y+1] = {x, y};
            q.push({x, y+1});
            parent_char[x][y+1] = 'R';
        }
        if (x-1 >= 0 && a[x-1][y] == '.'){
            parent[x-1][y] = {x, y};
            q.push({x-1, y});
            parent_char[x-1][y] = 'U';
        }
        if (y-1 >= 0 && a[x][y-1] == '.'){
            parent[x][y-1] = {x, y};
            q.push({x, y-1});
            parent_char[x][y-1] = 'L';
        }
    }

    if (a[end.first][end.second] == '.'){
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    vector<char> ans;
    pii aux = end;
    while(aux != start){
        ans.push_back(parent_char[aux.first][aux.second]);
        aux = parent[aux.first][aux.second];
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << '\n';
    for (auto &e : ans)
        cout << e;
    cout << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}