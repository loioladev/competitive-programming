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
    while(cin >> n && n){
        int ans = ceil(sqrt(n));
        // This is a mess hahaha
        if (ans & 1){
            int row = (ans * ans) - ans + 1;
            if (row > n)
                cout << ans << " " << n - (ans-1)*(ans-1)<< endl;
            else
                cout << (ans * ans) - n + 1 << " " << ans << endl;
        }
        else{
            int row = (ans * ans) - ans + 1;
            if (n > row)
                cout << ans << " " << (ans * ans) - n + 1<< endl;
            else
                cout << n - (ans-1)*(ans-1) << " " << ans << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}
