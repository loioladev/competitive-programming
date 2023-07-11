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

    sort(a.begin(), a.end());
    ll count = 0;
    int mediana = n / 2;
    mediana = a[mediana];
    for (auto &e : a)
        count += abs(mediana - e);
    cout << count << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}