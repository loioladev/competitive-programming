#include <bits/stdc++.h>

using namespace std;

void control(){
    string n;
    while(cin >> n, n != "0"){
        // Just convert as the problem says
        long long sum = 0;
        for (int i = 0, j = n.size() - 1; j >= 0; j--, i++){
            sum += (n[i] - '0') * (pow(2, j + 1) - 1);
        }
        cout << sum << endl;
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}
