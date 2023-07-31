#include <bits/stdc++.h>

#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

void control(){
    int n, x;
    cin >> n >> x;
    vi a(n);
    for (auto &e : a)
        cin >> e;
    
    ll count = 0;
    int last = 0;
    ll ans = 0;
    for (int i = 0; i < n; i++){
        count += a[i];
        while(count > x && last <= i){
            count -= a[last];
            last++;
        }

        if (count == x)
            ans++;
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
