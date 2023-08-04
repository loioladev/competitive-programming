#include <bits/stdc++.h>

using namespace std;

void control(){
    int n, m, c;
    while(cin >> n >> m >> c){
        if (n == 0 && n == m && m == c)
            break;
        // The strategy is to get all possible 8x8 boards
        // and eliminate the ones which ends with black
        if (c == 0)
            cout << ((n - 7) * (m - 7)) / 2 << endl;
        else
            cout << ((n - 7) * (m - 7) + 1) / 2 << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}
