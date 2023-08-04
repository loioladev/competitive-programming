#include <bits/stdc++.h>

#define dbg(x) cout << "[" << #x << " = " << x << "] ";
#define ff first
#define ss second
#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

int n;
int mod = 1e9 + 7;

int recursive(vector<ll>& dp, int value){
    if (value > n)
        return 0;
    
    if (value == n)
        return 1;
    
    if (dp[value] != -1)
        return dp[value];

    ll ans = 0;
    for (int i = 1; i <= 6; i++){
        ans += recursive(dp, value + i);
        ans %= mod;
    }
    return dp[value] = ans;
}

void control(){
    cin >> n;
    vector<ll> dp(n, -1);
    recursive(dp, 0);
    cout << dp[0] << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}