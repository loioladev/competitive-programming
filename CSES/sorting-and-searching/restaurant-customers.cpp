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
    vector<pii> a(n);
    for (auto &e : a)
        cin >> e.first >> e.second;
    sort(a.begin(), a.end());

    int ans = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++){
        pq.push(a[i].second);
        while(pq.top() <= a[i].first)
            pq.pop();
        ans = max(ans, int(pq.size()));
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