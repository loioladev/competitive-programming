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
    int n, m, c;
    while(cin >> n >> m >> c){
        if (n == 0 && n == m && m == c)
            break;
        // The strategy is to get all possible 8x8 boards
        // and eliminate the ones which ends with black
        if (c == 0)
            cout << ((n - 7) * (m - 7)) / 2 << endl;
        else
            cout << ((n - 7) * (m - 7) + 1) / 2 << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}
