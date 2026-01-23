#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    list<int> l;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            l.push_back(v[i]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 1 || v[i] % 2 == -1)
        {
            l.push_back(v[i]);
        }
    }

    while (!l.empty())
    {
        cout << l.front() << " ";
        l.pop_front();
    }

    return 0;
}