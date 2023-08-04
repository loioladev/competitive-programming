#include <bits/stdc++.h>

using namespace std;

long long find_zeros(long long x) {
    if (x < 0) 
        return 0;

    long long sum = 1;
    long long base_ten = 1;
    long long end = 0;

    while(x) {
        if (x % 10 != 0){
            sum += ((x / 10) * base_ten);
        }
        else {
            sum += (((x / 10) - 1) * base_ten) + end + 1;
        }
        end += x % 10 * base_ten;
		x /= 10;
        base_ten *= 10;
    }
    return sum;
}

void control(){
    long long m, n;
    while(cin >> m >> n){
        if (m < 0 && n < 0)
            break;
        cout << find_zeros(n) - find_zeros(m - 1) << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}