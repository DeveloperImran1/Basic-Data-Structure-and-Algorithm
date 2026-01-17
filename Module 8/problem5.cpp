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

    a.sort();

    int total_size = a.size();
    for (int i = 0; i < total_size; i++)
    {
        cout << *next(a.begin(), i) << " ";
    }

    return 0;
}