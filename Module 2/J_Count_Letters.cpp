#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> alpabet(27, 0);

    for (char c : s)
    {
        int asci = c;
        alpabet[asci - 97]++;
    }

    for (int i = 0; i < 27; i++)
    {
        if (alpabet[i] > 0)
        {
            char letter = i + 97;
            if (i == 25)
            {
                cout << letter << " : " << alpabet[i];
            }
            else
            {
                cout << letter << " : " << alpabet[i] << endl;
            }
        }
    }

    return 0;
}