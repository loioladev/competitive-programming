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
    int a, b;
    cin >> a >> b;
    int x = ((2 * a) - b) / 3;
    int y = a - (2 * x);

    if (x < 0 || y < 0){
        cout << "NO\n";
        return;
    }

    if (2 * y + x == b && 2 * x + y == a)
        cout << "YES\n";
    else
        cout << "NO\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    control();
    return 0;
}