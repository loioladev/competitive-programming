#include <bits/stdc++.h>

using namespace std;

long long solve(string a, int value) {
    long long sum = 0;
    for (int i = a.size() - 1, j = 0; i >= 0; i--, j++){
        if (a[j] >= 'A' && a[j] <= 'Z')
            sum += (a[j] - 'A' + 10) * pow(value, i);
        else
            sum += (a[j] - '0') * pow(value, i);
    }
    return sum;
}

void control(){
    string a, b;
    
    while(cin >> a >> b){
        bool found = false;
        // Verify every combination
        for (int i = 1; i <= 36 && !found; i++) {
            for (int j = 1; j <= 36 && !found; j++) {
                if (i == j)
                    continue;
                if (solve(a, i) == solve(b, j)){
                    cout << a << " (base " << i << ") = " << b << " (base " << j << ")" << endl;
                    found = true;
                }
            }
        }
        if (!found)
            cout << a << " is not equal to " << b << " in any base 2..36" << endl;
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}