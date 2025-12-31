#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n];
    for (int i = 0; i < n; i++) // order of (N)
    {
        cin >> arr[i];
    }

    // array ke serialy sort kore nita hobe, otherwise binary search kaj korbena.
    sort(arr, arr + n); // order of (N*LogN)

    while (q--) // order of (Q)
    {
        int x;
        cin >> x;
        int is_found = 0;

        // leaft and right pointer set in an array
        int l = 0;
        int r = n - 1;

        // binary search
        while (l <= r) // order of (LogN)
        {
            int mid = (l + r) / 2;
            if (arr[mid] == x)
            {
                is_found = 1;
                break;
            }

            else if (arr[mid] > x)
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (is_found)
        {
            cout << "found" << endl;
        }
        else
        {
            cout << "not found" << endl;
        }
    }
    return 0;
}

// Binary Search apply kore Time complexity: O(N) + O(N*LogN) + O(Q) + O(LogN) = O(N * LogN)
