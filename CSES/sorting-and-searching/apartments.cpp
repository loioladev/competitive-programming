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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n);
    for (auto &e : a)
        cin >> e;
    vi b(m);
    for (auto &e : b)
        cin >> e;

    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());

    int ans = 0;
    int p = 0, q = 0;
    while(p < n && q < m){
        if (b[q] - k > a[p]){
            q++;
            continue;
        }

        if (b[q] + k >= a[p] && a[p] >= b[q] - k){
            ans++;
            p++;
            q++;
        }
        else {
            p++;
        }
    }
    cout << ans << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}