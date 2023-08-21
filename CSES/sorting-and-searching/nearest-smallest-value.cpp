#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void solve()
{
    int n, aux;
    cin >> n;
    stack<int> numbers, queue, pst;
    vector<int> result (n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        numbers.push(aux);
    }
    for (int i = n - 1; i >= 0; i--)
    {
        // Adicionar aqui os valores
        while(!queue.empty() && numbers.top() < queue.top())
        {
            result[pst.top()] = i + 1;
            queue.pop(), pst.pop();
        }
        queue.push(numbers.top()), pst.push(i);
        numbers.pop();
    }
    for (auto c : result)
        cout << c << ' ';
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}