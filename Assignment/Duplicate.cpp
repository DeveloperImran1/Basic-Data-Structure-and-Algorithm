#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int temp[n] = {0};
    for (int i = 0; i < n; i++)
    {
        temp[v[i]]++;
    }

    int is_double = 0;
    for (int i = 0; i < n; i++)
    {
        if (temp[i] > 1)
        {
            is_double = 1;
            break;
        }
    }

    if (is_double)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}