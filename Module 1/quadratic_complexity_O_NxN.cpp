#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Ex: Order of n Complexity: O(n) - 2 ta loop pasapasi single vabe thakle.
    // loop 1
    for (int i = 0; i < n; i++)
    {
        cout << "Hi" << endl;
    }

    // loop 2
    for (int i = 0; i < n; i++)
    {
        cout << "Hi" << endl;
    }
    // uporer 2 ta loop mila complexity hobe Order of n. Karon
    // - O(n+n);
    // - O(2n);  // amra jani complexity calculate korar somoi constant ke bad dita hoi.
    // - O(n) // tai uporer 2 ta loop mila complexity hobe Order of n: O(n);

    // Ex: Quadratic complexity -->
    // Order of n^2 complexity: O(n^2) - 2 ta loop nested ba akjoner vitore arekjon thakle. Aitake amra O(n*n); bolte pari.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Hi" << endl; // 16 bar print hobe.
        }
    }

    // Order of n^3 complexity: O(n^3) - 3 ta loop nested ba akjoner vitore arekjon thakle. Aitake amra O(n*n*n); bolte pari.
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << "Hi" << endl; // n=4 hole. 24 bar print hobe.
            }
        }
    }
    return 0;
}