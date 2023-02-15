#include <bits/stdc++.h>

using namespace std;

void control(){
    int n;
    while(cin >> n && n){
        int ans = ceil(sqrt(n));
        // This is a mess hahaha
        if (ans & 1){
            int row = (ans * ans) - ans + 1;
            if (row > n)
                cout << ans << " " << n - (ans-1)*(ans-1)<< endl;
            else
                cout << (ans * ans) - n + 1 << " " << ans << endl;
        }
        else{
            int row = (ans * ans) - ans + 1;
            if (n > row)
                cout << ans << " " << (ans * ans) - n + 1<< endl;
            else
                cout << n - (ans-1)*(ans-1) << " " << ans << endl;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}
