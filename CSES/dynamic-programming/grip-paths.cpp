#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

int n;
int mod = (1e9 + 7);

int recursive(vector<vi>& dp, vector<string>& a, int i, int j) {
    if (i == n || j == n)
        return 0;

    if (i == n - 1 && j == n - 1)
        return 1;

    if (dp[i][j] != -1)
        return dp[i][j];

    dp[i][j] = 0;
    if (i + 1 < n && a[i+1][j] != '*')
        dp[i][j] = (dp[i][j] + recursive(dp, a, i+1, j)) % mod;
    if (j + 1 < n && a[i][j+1] != '*')
        dp[i][j] = (dp[i][j] + recursive(dp, a, i, j+1)) % mod;

    return dp[i][j];
}

void control(){
    cin >> n;
    vector<string> a(n);
    for (auto &e : a)
        cin >> e;

    if (a[0][0] == '*' || a[n-1][n-1] == '*'){
        cout << "0\n";
        return;
    }
    
    vector<vi> dp(n + 1, vi (n + 1, -1));
    cout << recursive(dp, a, 0, 0) << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}