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
 
bool cmp(pii& a, pii& b){
    if (a.second > b.second)
        return false;
    if (a.second < b.second)
        return true;
    if (a.first > b.first)
        return true;
    return false;
}
 
void control(){
    int n;
    cin >> n;
    vector<pii> a(n);
    for (auto &e : a)
        cin >> e.first >> e.second;
 
    sort(a.begin(), a.end(), cmp);

    int last = -1;
    int ans = 0;
    for (auto &e : a){
        if (e.first >= last){
            last = e.second;
            ans++;
        }
    }
    cout << ans << '\n';
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}