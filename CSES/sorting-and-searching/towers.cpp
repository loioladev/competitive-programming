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

    vi towers;
    towers.push_back(a[0]);
    for (int i = 1; i < n; i++){
        int pst = int(upper_bound(towers.begin(), towers.end(), a[i]) - towers.begin());
        if (pst == towers.size()){
            towers.push_back(a[i]);
            continue;
        }
        towers[pst] = a[i];
    }
    cout << towers.size() << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}