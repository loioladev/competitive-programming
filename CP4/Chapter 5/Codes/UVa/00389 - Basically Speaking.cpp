#include <bits/stdc++.h>

using namespace std;

long long convert_to_ten(string number, int base) {
    long long res = 0;
    for (int i = 0, j = number.size() - 1; j >= 0; j--, i++){
        if (number[i] >= 'A' && number[i] <= 'F')
            res += (number[i] - 'A' + 10) * pow(base, j);
        else
            res += (number[i] - '0') * pow(base, j);
    }
    return res;
}

string convert_to(long long number, int base){
    string res = "";
    while(number) {
        int aux = number % base;
        if (aux >= 10)
            res += ('A' + aux - 10);
        else
            res += to_string(aux);
        number /= base;
    }
    // Reverse numbers
    string ans = "";
    for (int i = res.size() - 1; i >= 0; i--)
        ans.push_back(res[i]);
    
    if (ans == "")
        ans = "0";
    return ans;
}

void control(){
    string number;
    int from, to;
    while(cin >> number >> from >> to){
        // Convert to base ten first
        long long base10 = convert_to_ten(number, from);
        string basex;
        // Analyse next conversion
        if (to != 10)
            basex = convert_to(base10, to);
        else
            basex = to_string(base10);
        
        // Verify output for calculator
        if (basex.size() > 7){
            cout << "  ERROR" << endl;
            continue;
        }
        for (int i = 7 - basex.size(); i > 0; i--)
            cout << " ";
        cout << basex << endl;
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}