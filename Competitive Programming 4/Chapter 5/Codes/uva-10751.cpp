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
    double ans = 0.0;
    // The ideia is to start in the corner, walk until
    // the opost corner - 1 square, and go to the left by
    // one square, walking towards the initial corner.
    // Do this until you have filled the left side, and repeat
    // the proccess in the right side
    if (n > 1)
        ans = (4 * n - 4) + sqrt(2) * (n - 2) * (n - 2);
    
    cout << setprecision(3) << fixed << ans << "\n\n";
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
