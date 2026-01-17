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
    for (int i = 0, j = total_size - 1; i < j; i++, j--)
    {
        swap(*next(a.begin(), i), *next(a.begin(), j));
    }

    // cout << a.front() << endl;
    // cout << a.back() << endl;

    for (int i = 0; i < total_size; i++)
    {
        cout << *next(a.begin(), i) << endl;
    }
    return 0;
}