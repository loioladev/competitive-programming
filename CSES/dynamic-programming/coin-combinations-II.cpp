#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

int n, x;
int mod = 1e9 + 7;
int recursive(vector<ll>& dp, vector<ll>& c, ll sum, int last) {
    if (sum > x)
        return 0;

    if (sum == x)
        return 1;

    if (dp[sum] != -1)
        return dp[sum];
    
    ll ans = 0;
    for (int i = 0; i < n; i++)
        if (c[i] >= last)
            ans += recursive(dp, c, sum + c[i], c[i]);

    ans %= mod;
    return dp[sum] = ans;
}

void control(){
    cin >> n >> x;
    vector<ll> c(n);
    for (auto &e : c)
        cin >> e;
    vector<ll> dp(x, -1);
    sort(c.begin(), c.end());
    recursive(dp, c, 0, 0);
    for (auto &e : dp)
        cout << e << " ";
    cout << dp[0] << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}