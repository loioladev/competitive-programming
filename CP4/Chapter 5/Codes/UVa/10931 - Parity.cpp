#include <bits/stdc++.h>

using namespace std;

// Decimal to binary
string convert_binary(int n) {
    if (n / 2 == 0)
        return to_string(n % 2);
    return convert_binary(n / 2) + to_string(n % 2);
}

void control(){
    int n;
    while(cin >> n, n != 0) {
        string binary = convert_binary(n);
        // Count ones in binary
        int parity = 0;
        for (auto &e : binary)
            if (e == '1')
                parity++;
        cout << "The parity of " << binary << " is " << parity << " (mod 2).\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}
