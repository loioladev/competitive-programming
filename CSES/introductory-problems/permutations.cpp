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
    if (n == 1)
        cout << "1\n";
    else if (n <= 3)
        cout << "NO SOLUTION\n";
    else{
        vi a(n);
        int l = 0, r = n-1;
        for (int i = n-1, j = 0; i >= 1; i--, j++){
            if (j & 1){
                a[r] = i;
                r--;
            }
            else{
                a[l] = i;
                l++;
            }
        }
        for (auto &e : a){
            if (e == 0)
                cout << n << " ";
            else
                cout << e << " ";
        }
    }
    cout << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}