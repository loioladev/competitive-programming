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
    ll x, y;
    cin >> x >> y;

    if (y > x){
        if (y & 1)
            cout << y*y - (x-1);
        else
            cout << (y-1)*(y-1) + 1 + (x-1);
    }
    else{
        if (x & 1)
            cout << (x-1)*(x-1) + 1 + (y-1);
        else
            cout << x*x - (y-1);
    }
    cout << '\n';
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