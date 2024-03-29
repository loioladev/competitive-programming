#include <bits/stdc++.h>

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
    ll n;
    cin >> n;
    for (ll i = 1; i <= n; i++){
        ll total = ((i * i) * ((i * i) - 1LL)) / 2LL;
        ll attacks = 4 * (i - 1) * (i - 2);
        cout << total - attacks << '\n';
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}