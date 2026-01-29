#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<string, int> p;
    p = {"Imran", 6};
    cout << p.first << " " << p.second;

    // vector basic syntax
    // vector<int> v;
    // cin >> v[0];  // v namer vector er 0 number index a value set kortesi.

    // akta vector er every index a akta kore pair rakhte pari.
    int n = 5;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << " ";
    }

    return 0;
}
