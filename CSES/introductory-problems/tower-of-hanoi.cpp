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

    vector<pii> ans;
    stack<int> a, b, c;
    for (int i = n; i > 0; i--)
        a.push(i);

    while(c.size() != n){

    }

    cout << ans.size() << '\n';
    for (auto &e : ans)
        cout << e.first << " " << e.second << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}