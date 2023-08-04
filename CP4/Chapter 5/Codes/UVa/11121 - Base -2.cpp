#include <bits/stdc++.h>

using namespace std;

void to_base_neg2(int n) {
    if (n > 0) {
        to_base_neg2(n / (-2));
        cout << n % 2;
    }
    if (n < 0) {
        to_base_neg2(n / (-2) + (n % (-2) != 0));
        cout << abs(n % (-2));
    }
}

void control(){
    int n;
    cin >> n;
    if (n == 0){
        cout << "0" << endl;
        return;
    }
    to_base_neg2(n);
    cout << endl;
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++){
        cout << "Case #" << i << ": ";
        control();
    }
    return 0;
}