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
    int n, x;
    cin >> n >> x;
    vi a(n);
    for (auto &e : a)
        cin >> e;
    
    sort(a.begin(), a.end());
    int ans = 0;
    for (int i = 0, j = n-1; i <= j;){
        if (a[i] + a[j] <= x){
            ans++;
            i++,j--;
        }
        else{
            ans++;
            j--;
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