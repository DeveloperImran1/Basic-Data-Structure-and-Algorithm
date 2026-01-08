#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    // int arr[26] = {0};
    // for (int i = 0; i < s.size(); i++)
    // {
    //     int asci = s[i] - 97;
    //     arr[asci]++;
    // }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (arr[i] == 1)
    //     {
    //         char c = i + 97;
    //         cout << c << endl;
    //         break;
    //     }
    // }

    int isMatch = 0;
    for (int i = 0; i < s.size(); i++)
    {

        int count = 1;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[i] == s[j] && i != j)
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << s[i] << " ";

            isMatch = 1;
            break;
        }
    }

    if (!isMatch)
    {

        cout << -1 << endl;
    }

    return 0;
}