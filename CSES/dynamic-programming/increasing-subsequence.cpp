#include <bits/stdc++.h>

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
    
    vi ans;
    ans.push_back(a[0]);
    for (int i = 1; i < n; i++){
        if (a[i] > ans.back())
            ans.push_back(a[i]);
        else{
            int low = lower_bound(ans.begin(), ans.end(), a[i]) - ans.begin();
            ans[low] = a[i];
        }
    }
    cout << ans.size() << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}