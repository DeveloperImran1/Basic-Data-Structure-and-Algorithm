#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    stack<int> st1;
    queue<int> q1;

    while (n--)
    {
        int val;
        cin >> val;
        st1.push(val);
    }
    while (m--)
    {
        int val;
        cin >> val;
        q1.push(val);
    }

    // Way 1:
    // queue<int> q2;
    // while (!st1.empty())
    // {
    //     q2.push(st1.top());
    //     st1.pop();
    // }

    // if (q1 == q2)
    // {
    //     cout << "YES";
    // }
    // else
    // {
    //     cout << "NO";
    // }

    // Way 2: -------------------->
    if (m != n)
    {
        cout << "NO";

        return 0;
    }

    while (!st1.empty())
    {
        if (st1.top() != q1.front())
        {
            cout << "NO";
            return 0;
        }
        st1.pop();
        q1.pop();
    }

    cout << "YES";

    return 0;
}