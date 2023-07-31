#include <bits/stdc++.h>

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
    vi a;
    for (int i = 1; i <= n; i++)
        a.push_back(i);
    
    int i = 1;
    while(a.size() > 0){
        vi next_it;
        for (int j = i - 1; j < int(a.size()); j += 2){
            if (j >= 0)
                next_it.push_back(a[j]);
        }

        for (; i < int(a.size()); i += 2){
            cout << a[i] << ' ';
        }
        
        i %= a.size();
        a = next_it;
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