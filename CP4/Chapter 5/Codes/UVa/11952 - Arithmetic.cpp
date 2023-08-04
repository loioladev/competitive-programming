#include <bits/stdc++.h>

using namespace std;

void control(){
    // get input
    string a, b, c, tmp;
    cin >> a >> tmp >> b >> tmp >> c;

    // verify base 1
    bool one = true;
    for (auto &e : c)
        if (e != '1')
            one = false;
    if (one) {
        tmp = a + b;
        if (tmp == c){
            cout << "1" << endl;
            return;
        }
    }
    
    // add leadings zeros to make easier
    int diff = a.size() - b.size();
    if (diff > 0)
        for (int i = 0; i < diff; i++)
            b = "0" + b;
    else if (diff < 0)
        for (int i = 0; i < -diff; i++)
            a = "0" + a;
    a = "0" + a;
    b = "0" + b;

    // Verify base
    int size = a.size();
    for (int base = 2; base <= 18; base++){
        string ans = "";
        int carry_on = 0;
        bool found = false;
        for (int i = size - 1; i > 0; i--){
            // If number is greater or equal to base, ignore
            if ((a[i] - '0') >= base || (b[i] - '0') >= base){
                found = true;
                break;
            }

            int sum = (a[i] - '0') + (b[i] - '0') + carry_on;
            ans += char((sum % base) + '0');
            carry_on = sum / base;
        }
        if (found)
            continue;
        ans += char(carry_on + '0');

        // Reverse string
        string real_ans = "";
        for (int i = ans.size() - 1; i >= 0 ; i--)
            real_ans += ans[i];

        // Verify if it is the correct base
        if (atoi(real_ans.c_str()) == atoi(c.c_str())){
            cout << base << endl;
            return;
        }
    }
    cout << "0" << endl;
    return;
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
