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

ll rec(vi& v, ll a, ll b, int pst) {
    if (pst >= v.size())
        return abs(a - b);
    ll aux1 = rec(v, a, b + v[pst], pst + 1);
    ll aux2 = rec(v, a + v[pst], b, pst + 1);
    return min(aux1, aux2);
}

void control(){
    int n;
    cin >> n;
    vi a(n);
    for(auto &e : a)
        cin >> e;
    
    cout << rec(a, 0, 0, 0) << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}