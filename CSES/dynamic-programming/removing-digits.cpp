#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

int recursive(vi& dp, int value) {
    if (value == 0)
        return 0;
    
    if (dp[value] != 0)
        return dp[value];
    
    int ans = INTINF;
    string aux = to_string(value);
    for (auto &e : aux){
        if (e == '0')
            continue;
        int number = e - '0';
        ans = min(ans, recursive(dp, value - number) + 1);
    }
    return dp[value] = ans;
}

void control(){
    int n;
    cin >> n;
    vi dp(n + 10);
    cout << recursive(dp, n) << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}