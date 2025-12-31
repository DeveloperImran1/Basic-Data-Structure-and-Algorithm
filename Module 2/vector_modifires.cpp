#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2;
    v2 = v;

    // Normal for loop. Jokhon index er dorkar hobe.
    // for (int i = 0; i < v2.size(); i++)
    // {
    //     cout << v2[i] << " ";
    // }

    v2.pop_back();    // vector er last theke element delete kore.
    v2.push_back(60); // vector er last theke element add kore.

    // vector er kono akta position a value add korte insert() function use hoi. er 1st perameter a bole dita hoi kon index a value insert korbo. ar 2nd perameter a bolte hoi ki value add korbo. v.begin(); mane holo vector er 0 number index. ar v.end(); mane holo vector er last index er porer index. So amra jodi 2 number index a new value insert korte chai. Tahole v.begin() + 2; korte hobe.
    v2.insert(v2.begin() + 2, 100);                // single value add
    v2.insert(v2.begin() + 3, {101, 102, 103});    // multiple value add korte hole aivabe 2nd perameter a akta array hisabe dita hobe.
    v2.insert(v2.begin() + 5, v.begin(), v.end()); // v2 er 5 number index theke value add hobe. v array er 0 number index theke v array er last index porjonto all value.

    v2.erase(v2.begin() + 1);               // 1 number index ke delete kortesi.
    v2.erase(v2.begin() + 1, v2.end() - 1); // v2 er 1 number index theke v2 er last index er ager index porjonto all element delete korbe.

    // Shortcut for loop. Jokhon index er dorkar hobena. Aita array or vector theke every iteration a akta akta kore element nei.
    for (int i : v2)
    {
        cout << i << " ";
    }
    return 0;
}