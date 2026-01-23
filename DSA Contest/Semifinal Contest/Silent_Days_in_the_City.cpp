#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> silent_days;
    for (int i = 0; i < n - 2; i++)
    {
        if ((arr[i] > arr[i + 1]) && (arr[i + 1] < arr[i + 2]))
        {
            silent_days.push_back(i + 2);
            // cout << i + 2 << " ";
        }
    }

    // cout << silent_days.size();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        int count = 0;
        for (long long int i = 0; i < silent_days.size(); i++)
        {
            if (silent_days[i] >= l && silent_days[i] <= r)
            {
                count++;
            }

            // cout << i << endl;
        }

        cout << count << endl;
    }

    return 0;
}