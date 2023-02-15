#include <bits/stdc++.h>

using namespace std;

void control(){
    int n;
    cin >> n;
    // Simulate with n = 3 and the answer will be
    // the pattern found
    long long ans = (long long)n * (long long)(n-1);
    if (ans % 4LL == 0)
        cout << ans / 4LL << '\n';
    else
        cout << ans / 2 << "/2\n";
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
