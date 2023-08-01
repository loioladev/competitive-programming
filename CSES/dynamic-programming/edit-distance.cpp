#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

void control(){
    string n, m;
    cin >> n >> m;
    vector<vi> dp(n.size() + 1, vi(m.size() + 1));
    for (int i = 0; i <= int(m.size()); i++)
        dp[0][i] = i;
    for (int i = 0; i <= int(n.size()); i++)
        dp[i][0] = i;
    for (int i = 1; i <= int(n.size()); i++){
        for (int j = 1; j <= int(m.size()); j++){
            if (n[i-1] == m[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1], dp[i][j-1])) + 1;
        }
    }
    cout << dp[n.size()][m.size()] << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}