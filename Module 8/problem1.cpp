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

    // 2nd list
    list<int> b;
    int val2;
    while (true)
    {
        cin >> val2;

        if (val2 == -1)
        {
            break;
        }
        b.push_back(val2);
    }

    int size_of_a = a.size();
    int size_of_b = b.size();

    if (size_of_a != size_of_b)
    {
        cout << "NO" << endl;
    }
    else
    {
        int is_same = 1;
        for (int i = 0; i < size_of_a; i++)
        {
            if (*next(a.begin(), i) != *next(b.begin(), i))
            {
                is_same = 0;
                break;
            }
        }

        if (is_same)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}