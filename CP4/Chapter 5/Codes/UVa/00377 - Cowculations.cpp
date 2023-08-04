#include <bits/stdc++.h>

using namespace std;

map<char, map<char, pair<char, char>>> get_table() {
    map<char, map<char, pair<char, char>>> aux;
    aux['V']['V'] = make_pair('V', ' ');
    aux['V']['U'] = make_pair('U', ' ');
    aux['V']['C'] = make_pair('C', ' ');
    aux['V']['D'] = make_pair('D', ' ');
    aux['U']['V'] = make_pair('U', ' ');
    aux['U']['U'] = make_pair('C', ' ');
    aux['U']['C'] = make_pair('D', ' ');
    aux['U']['D'] = make_pair('V', 'U');
    aux['C']['V'] = make_pair('C', ' ');
    aux['C']['U'] = make_pair('D', ' ');
    aux['C']['C'] = make_pair('V', 'U');
    aux['C']['D'] = make_pair('U', 'U');
    aux['D']['V'] = make_pair('D', ' ');
    aux['D']['U'] = make_pair('V', 'U');
    aux['D']['C'] = make_pair('U', 'U');
    aux['D']['D'] = make_pair('C', 'U');
    return aux;
}

string make_sum(string a, string b, map<char, map<char, pair<char, char>>>& calcs) {
    string ans = "";
    
    // Make the same length
    while(a.size() > b.size())
        b = " " + b;
    while(b.size() > a.size())
        a = " " + a;
    a = " " + a;
    b = " " + b;

    char carry_on = ' ';
    for (int i = a.size() - 1; i >= 0; i--){
        // Verify equality
        if (a[i] == ' ' && b[i] == ' '){
            ans.push_back(carry_on);
            break;
        }
        if (a[i] == ' ' && b[i] != ' '){
            ans.push_back(b[i]);
            continue;
        }
        if (a[i] != ' ' && b[i] == ' '){
            ans.push_back(a[i]);
            continue;
        }

        // If there is a carry on from past cowculations
        if (carry_on != ' '){
            char aux = calcs[a[i]][carry_on].first;
            carry_on = calcs[a[i]][carry_on].second;
            a[i] = aux;
        }

        // Make cowculations
        ans.push_back(calcs[a[i]][b[i]].first);
        if (carry_on != ' ' && calcs[a[i]][b[i]].second != ' ')
            carry_on = calcs[carry_on][calcs[a[i]][b[i]].second].first;
        else if (carry_on == ' ' && calcs[a[i]][b[i]].second != ' ')
            carry_on = calcs[a[i]][b[i]].second;
    }

    // Invert string and remove whitespaces
    string res = "";
    for (int i = ans.size() - 1; i >= 0; i--)
        if (ans[i] != ' ')
            res.push_back(ans[i]);
    return res;
}

void control(){
    vector<string> matrix (6);
    for (auto &e : matrix)
        cin >> e;
    map<char, map<char, pair<char, char>>> calcs = get_table();

    // Make cowculations
    for (int i = 2; i < 5; i++){
        // Sum
        if (matrix[i][0] == 'A'){
            matrix[1] = make_sum(matrix[0], matrix[1], calcs);
        }
        // Shift right
        else if (matrix[i][0] == 'R'){
            matrix[1].pop_back();
            matrix[1] = "V" + matrix[1];
        }
        // Shift left
        else if (matrix[i][0] == 'L'){
            matrix[1].push_back('V');
        }
        // NULL
        else {
            continue;
        }
    }
    // Add leading "V"
    for (int i = matrix[1].size(); i < 8; i++)
        matrix[1] = "V" + matrix[1];

    // Print cowculations output
    if (matrix[1] == matrix[5]){
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    cout << "COWCULATIONS OUTPUT" << endl;
    while(t--)
        control();
    cout << "END OF OUTPUT" << endl;
    return 0;
}
