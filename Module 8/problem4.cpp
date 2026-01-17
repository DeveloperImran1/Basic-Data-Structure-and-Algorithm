#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> a;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        int total_size = a.size();

        if (x > total_size)
        {
            cout << "Invalid" << endl;
            continue;
        }
        a.insert(next(a.begin(), x), v);

        total_size = a.size();
        // print forward way
        for (int i = 0; i < total_size; i++)
        {
            cout << *next(a.begin(), i) << " ";
        }
        cout << endl;

        // print backward way
        for (int i = total_size - 1; i >= 0; i--)
        {
            cout << *next(a.begin(), i) << " ";
        }
        cout << endl;
    }

    return 0;
}