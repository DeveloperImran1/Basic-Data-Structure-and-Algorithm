#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> a;
    int val;
    while (true)
    {
        cin >> val;

        if (val == -1)
        {
            break;
        }
        a.push_back(val);
    }

    int total_size = a.size();
    int flag = 1;
    for (int i = 0, j = total_size - 1; i < j; i++, j--)
    {
        if (*next(a.begin(), i) != *next(a.begin(), j))
        {
            flag = 0;
            break;
        }
    }

    flag ? cout << "YES" : cout << "NO";

    return 0;
}