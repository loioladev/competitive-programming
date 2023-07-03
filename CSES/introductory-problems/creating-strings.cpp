#include <bits/stdc++.h>

#define dbg(x) cout << "[" << #x << " = " << x << "] ";
#define ff first
#define ss second
#define LLINF 0x7FFFFFFFFFFFFFFF
#define INTINF 0x7FFFFFFF

using namespace std;
using vi = vector<int>;
using pii = pair<int, int>;
using ll = long long;
using tii = tuple<int, int, int>;

void add_word(vector<char>& word, set<string>& count, vi visited, string ans){
    if (ans.size() == word.size()){
        count.insert(ans);
        return;
    }
    for (int i = 0; i < int(word.size()); i++){
        if (visited[i])
            continue;

        string aux = ans;
        aux.push_back(word[i]);
        visited[i] = 1;
        add_word(word, count, visited, aux);
        visited[i] = 0;
    }
}

void control(){
    string s;
    cin >> s;
    set<string> count;
    vector<char> word;
    for (auto &e : s)
        word.push_back(e);
    
    vi visited(s.size());
    add_word(word, count, visited, "");
    cout << count.size() << '\n';
    for (auto &e : count)
        cout << e << "\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    control();
    return 0;
}