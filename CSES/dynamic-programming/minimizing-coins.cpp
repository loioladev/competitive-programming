#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

int recursive(vi& dp, vi& a, int value) {
    if (value < 0)
        return INTINF;
    
    if (value == 0)
        return 0;

    if (dp[value] == INTINF - 1)
        return INTINF;

    if (dp[value] != INTINF)
        return dp[value];
    
    for (auto &e : a){
        int res = recursive(dp, a, value - e);
        if (res == INTINF)
            continue;
        dp[value] = min(dp[value], res + 1);
    }

    if (dp[value] == INTINF)
        dp[value] = INTINF - 1;
    
    return dp[value];
}

void control(){
    int n, x;
    cin >> n >> x;
    vi a(n);
    for (auto &e : a)
        cin >> e;
    vi dp(x+1, INTINF);
    int ans = recursive(dp, a, x);
    if (ans == INTINF - 1)
        cout << -1 << '\n';
    else
        cout << ans << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}