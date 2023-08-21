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
    
    map<int, int> pst;
    vector<vi> v;
    for (int i = 0; i < n; i++){
        if (pst[a[i] - 1] == 0){
            pst[a[i]] = v.size() + 1;
            v.push_back({a[i]});
        }
        else{
            v[pst[a[i] - 1] - 1].push_back(a[i]);
            pst[a[i]] = pst[a[i] - 1];
        }
    }
    cout << v.size() << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}