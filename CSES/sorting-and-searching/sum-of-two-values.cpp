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

bool cmp(const pii& a, const int& value) {
    return a.first < value;
}

void control(){
    int n, x;
    cin >> n >> x;
    
    vector<pii> a(n);
    map<int,vi> count;
    for (int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i+1;
        count[a[i].first].push_back({i+1});
    }

    sort(a.begin(), a.end());

    for (int i = 0; i < n; i++){
        int pst = int(lower_bound(a.begin(), a.end(), abs(a[i].first - x), cmp) - a.begin());
        if (pst >= n)
            continue;

        if (a[i].first + a[pst].first == x){
            if (pst == i){
                if (count[a[i].first].size() > 1){
                    cout << count[a[i].first][0] << " " << count[a[i].first][1] << '\n';
                    return;
                }
                continue;
            }
            cout << a[i].second << " " << a[pst].second << '\n';
            return;
        }
    }

    cout << "IMPOSSIBLE\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}