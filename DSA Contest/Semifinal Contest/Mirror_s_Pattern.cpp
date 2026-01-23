#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // 1 tai value thake sudho oi value tai print hobe
    if (n == 1)
    {
        cout << 1;
        return 0;
    }

    // forward way
    for (int i = 1; i <= n; i++)
    {
        cout << i;
    }
    cout << endl;

    // middle part
    for (int i = 2, j = n - 1; i < n; i++, j--)
    {
        cout << i;

        // space print
        for (int k = 1; k < n - 1; k++)
        {
            cout << " ";
        }

        cout << j << endl;
    }

    // backward way
    for (int i = n; i > 0; i--)
    {
        cout << i;
    }

    return 0;
}