#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q;
    while (n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    stack<int> s;
    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    return 0;
}