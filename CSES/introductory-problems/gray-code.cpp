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
    vector<string> numbers;
    for (int i = 0; i < (1 << n); i++){
        string bits = "";
        for (int j = 0; j < n; j++)
            if (i & (1 << j))
                bits.push_back('1');
            else
                bits.push_back('0');
        reverse(bits.begin(), bits.end());
        numbers.push_back(bits);
    }
    int m = numbers.size();
    
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}