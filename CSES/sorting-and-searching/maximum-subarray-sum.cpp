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
    vector<ll> a(n);
    for (auto &e : a)   
        cin >> e;
    
    ll m = -INTINF;
    ll sum = 0;
    for (int i = 0; i < n; i++){

        m = max(a[i], m);
        sum += a[i];
        if (sum >= 0)
            m = max(sum, m);
        else
            sum = 0;
    }
    cout << m << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}