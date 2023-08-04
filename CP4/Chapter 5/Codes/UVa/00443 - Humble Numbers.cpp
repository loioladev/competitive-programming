#include <bits/stdc++.h>

using namespace std;

void control(){
    // Pre-compute all possibilites until last number
    vector<long long> numbers;
    set<long long> avoid_rep;
    vector<long long> factors = {2LL, 3LL, 5LL, 7LL};

    priority_queue<long long, vector<long long>, greater<long long>> q;
    q.push(1LL);
    while(avoid_rep.size() <= 5842) {
        long long aux = q.top();
        q.pop();
        if (avoid_rep.find(aux) == avoid_rep.end()) {
            numbers.push_back(aux);
            avoid_rep.insert(aux);
            for (auto &e : factors)
                q.push(aux * e);
        }
    }
    sort(numbers.begin(), numbers.end());
    
    int n;
    while(cin >> n, n != 0){
        vector<string> suf = {"th", "st", "nd", "rd"};
        auto ord = n % 100;
        if (ord / 10 == 1) { ord = 0; }
        ord = ord % 10;
        if (ord > 3) { ord = 0; }
        cout << "The " << n << suf[ord] << " humble number is " << numbers[n-1] << "." << endl;
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}
