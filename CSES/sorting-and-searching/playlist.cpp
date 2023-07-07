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
    vi a(n);
    for (auto &e : a)
        cin >> e;
    
    map<int, int> count;
    for (int i = 0; i < n; i++)
        count[a[i]] = -1;
    
    int start = 0;
    int ans = 0;
    int maxi = 0;
    for (int i = 0; i < n; i++){
        if (count[a[i]] >= 0 && start <= count[a[i]]){
            maxi -= count[a[i]] - start;
            start = count[a[i]] + 1;
            count[a[i]] = i;
        }
        else{
            maxi++;
            count[a[i]] = i;
        }
        ans = max(maxi, ans);
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