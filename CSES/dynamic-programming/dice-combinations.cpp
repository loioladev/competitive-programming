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

int recursive(vector<ll>& dp, int value){
    if (value <= 0)
        return 0;
    
    if (dp[value] != -1)
        return dp[value];
    
    for (int i = 1; i <= 6; i++)
        dp[value] += recursive(dp, value - i);
    
    return dp[value];
}

void control(){
    int n;
    cin >> n;
    vector<ll> dp(n+1, -1);
    recursive(dp, n);
    cout << dp[n] << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}