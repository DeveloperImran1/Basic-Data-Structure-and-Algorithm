#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) // Order of n complexity: O(n);
    {
        for (int j = 1; j < n; j *= 2) // Order of log n complexity O(logN)
        {
            cout << "Hi" << endl;
        }
    }
    return 0;
}

// uporer program a complexity hobe:
// O(N * log N);
// O (NlogN); -> aitake bole Order of N * log N