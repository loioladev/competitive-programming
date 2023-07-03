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
    vi a, b;
    ll asum = 0, bsum = 0;
    for (int i = n; i > 0; i--){
        if (asum > bsum){
            b.push_back(i);
            bsum += i;
        }
        else{
            a.push_back(i);
            asum += i;
        }
    }
    if (asum != bsum)
        cout << "NO\n";
    else{
        cout << "YES\n";
        cout << a.size() << '\n';
        for (auto &e : a)
            cout << e << " ";
        cout << "\n" << b.size() << "\n";
        for (auto &e : b)
            cout << e << " ";
        cout << '\n';
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}