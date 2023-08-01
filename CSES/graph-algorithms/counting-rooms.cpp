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
    
    int rooms = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (a[i][j] != '.')
                continue;
            rooms++;
            queue<pii> q;
            q.push({i, j});
            while(!q.empty()){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                if (a[x][y] == 'x')
                    continue;
                a[x][y] = 'x';
                if (x - 1 >= 0 && a[x-1][y] == '.')
                    q.push({x-1,y});
                if (y - 1 >= 0 && a[x][y-1] == '.')
                    q.push({x, y-1});
                if (x+1 < n && a[x+1][y] == '.')
                    q.push({x+1, y});
                if (y + 1 < m && a[x][y+1] == '.')
                    q.push({x, y+1});
            }
        }
    }

    cout << rooms << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}