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
    string s;
    cin >> s; 
    int n = s.size();
    int last = s[0];
    int maxs = 0;
    for (int i = 0; i < n;){
        int aux = 0;
        while(s[i] == last){
            aux++;
            i++;
        }
        last = s[i];
        maxs = max(maxs, aux);
    }
    cout << maxs << '\n';
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}