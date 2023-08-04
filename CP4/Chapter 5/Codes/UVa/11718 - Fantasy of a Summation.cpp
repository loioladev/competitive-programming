#include <bits/stdc++.h>

using namespace std;

void control(){
    long long n, K, MOD;
    cin >> n >> K >> MOD;
    vector<long long> a (n);
    for (auto &e : a)
        cin >> e;
    // No ideia for the rest
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cout << "Case " << i << ": ";
        control();
    }
    return 0;
}
