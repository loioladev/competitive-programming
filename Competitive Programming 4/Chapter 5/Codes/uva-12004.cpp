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

void control(){
    int n;
    cin >> n;
    // Simulate with n = 3 and the answer will be
    // the pattern found
    ll ans = (ll)n * (ll)(n-1);
    if (ans % 4LL == 0)
        cout << ans / 4LL << '\n';
    else
        cout << ans / 2 << "/2\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        control();
    }
    return 0;
}
