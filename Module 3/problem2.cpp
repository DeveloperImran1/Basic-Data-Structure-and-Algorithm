#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << prefix_sum[i] << " ";
    // }

    // cout << endl;

    int r_pointer = n - 1;
    int l_pointer = n - 2;

    while (r_pointer >= 0)
    {

        // cout << r_pointer << " " << l_pointer << " ";

        if (prefix_sum[l_pointer] == (prefix_sum[n - 1] - prefix_sum[r_pointer]))
        {
            cout << r_pointer - 1;
            break;
        }
        r_pointer--;
        l_pointer--;
    }

    return 0;
}