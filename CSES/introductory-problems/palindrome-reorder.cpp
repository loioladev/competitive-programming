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
    sort(s.begin(), s.end());
    vector<char> ans (s.size());
    vector<char> impar;
    int l = 0, r = s.size() - 1;
    int i;
    for(i = 1; i < n; i+=2){
        if (s[i] != s[i-1]){
            impar.push_back(s[i-1]);
            i--;
            continue;
        }
        ans[l] = s[i];
        ans[r] = s[i];
        l++, r--;
    }
    if (i == n)
        impar.push_back(s[s.size()-1]);

    if (impar.size() > 0 && s.size() % 2 == 0)
        cout << "NO SOLUTION";
    else if (impar.size() > 1)
        cout << "NO SOLUTION";
    else{
        for (auto &e : ans){
            if (e == 0)
                cout << impar[0];
            else
                cout << e;
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