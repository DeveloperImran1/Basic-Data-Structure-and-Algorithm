#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    vector<char> v;
    for (int i = 0; i < s.size(); i++)
    {
        int asci = s[i] - 48;
        if (asci > 1 && asci <= 9)
        {
            while (asci--)
            {
                v.push_back(s[i - 1]);
            }
        }
        else
        {
            int next_idx = s[i + 1] - 48;
            if (next_idx > 1 && next_idx <= 9)
            {
                continue;
            }
            else
            {
                v.push_back(s[i]);
            }
        }
    }

    int idx;
    cin >> idx;
    cout << v[idx - 1] << " ";

    return 0;
}