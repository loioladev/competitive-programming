#include <bits/stdc++.h>

#define LINF 0x7FFFFFFFFFFFFFFF
#define INF 0x7FFFFFFF
#define MOD 1e9+7
#define sz(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

void solve(){
    int n, m;
    cin >> n >> m;
    vi a(n);
    for (auto &e : a)
        cin >> e;
    
    vector<ll> count(n);
    count[0] = a[0];
    for (int i = 1; i < n; i++)
        count[i] = a[i] + count[i-1];
    
    while(m--){
        int x, y;
        cin >> x >> y;
        cout << count[y-1] - count[x-1] + a[x-1] << '\n';
    }
    return;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++){
        // cout << "Case #" << t << ": ";
        solve();
    }
    return 0;
}