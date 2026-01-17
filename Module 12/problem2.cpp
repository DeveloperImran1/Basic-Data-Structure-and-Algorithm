#include <bits/stdc++.h>
using namespace std;

int main()
{
    // stack input
    stack<int> s2;
    int m;
    cin >> m;
    while (m--)
    {
        int val;
        cin >> val;
        s2.push(val);
    }

    // que input and reverse -->
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

    // check n, m equal or not
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    // stack and queue 2ta check every element
    while (!s.empty())
    {

        if (s.top() != s2.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        s.pop();
        s2.pop();
    }

    cout << "YES" << endl;
    return 0;
}