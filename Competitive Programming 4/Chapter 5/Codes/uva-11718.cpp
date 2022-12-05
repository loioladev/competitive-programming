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
    ll n, K, MOD;
    cin >> n >> K >> MOD;
    vector<ll> a (n);
    for (auto &e : a)
        cin >> e;

    ll sum = 0;
    for (auto &e : a)
        sum = (sum + (e % MOD)) % MOD;
    
    
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
