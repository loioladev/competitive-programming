#include <bits/stdc++.h>

using namespace std;


void control(){
    int n;
    cin >> n;
    double ans = 0.0;
    // The ideia is to start in the corner, walk until
    // the opost corner - 1 square, and go to the left by
    // one square, walking towards the initial corner.
    // Do this until you have filled the left side, and repeat
    // the proccess in the right side
    if (n > 1)
        ans = (4 * n - 4) + sqrt(2) * (n - 2) * (n - 2);
    
    cout << setprecision(3) << fixed << ans << "\n\n";
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
