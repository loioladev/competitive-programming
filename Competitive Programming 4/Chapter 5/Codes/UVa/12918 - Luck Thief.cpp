#include <bits/stdc++.h>

using namespace std;

void control(){
    long long n, m;
    cin >> n >> m;
    // Gauss sum
    long long ans = (n * ((m - 1) + (m - n))) / 2;
    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        control();
    return 0;
}
