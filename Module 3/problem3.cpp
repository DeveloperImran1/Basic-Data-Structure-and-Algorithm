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

    sort(v, v + n);
    int q;
    cin >> q;

    while (q--)
    {
        int x;
        cin >> x;

        int flag = 0;
        int l_pointer = 0;
        int r_pointer = n - 1;

        while (l_pointer <= r_pointer)
        {
            int mid_index = (l_pointer + r_pointer) / 2;
            if (v[mid_index] == x)
            {
                flag = 1;
                break;
            }
            else if (v[mid_index] < x)
            {
                l_pointer = mid_index + 1;
            }
            else
            {
                r_pointer = mid_index - 1;
            }
        }

        if (flag)
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