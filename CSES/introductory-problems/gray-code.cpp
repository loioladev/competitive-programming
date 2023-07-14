#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
 
vector<string> ans;
 
vector<string> gray(int n){
    vector<string> ans;
    if (n == 1){
        ans.push_back("0");
        ans.push_back("1");
        return ans;
    }
 
    vector<string> previous = gray(n-1);
    for (auto &e : previous){
        ans.push_back("0" + e);
    }
    for (int i = previous.size() - 1; i>= 0; i--){
        ans.push_back("1" + previous[i]);
    }
    return ans;
}
 
void solve()
{
    int n;
    cin >> n;
    vector<string> ans = gray(n);
    for (auto &e : ans)
        cout << e << "\n";
    return;
 
}
 
int main()
{
    solve();
}