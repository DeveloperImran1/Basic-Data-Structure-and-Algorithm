#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; // Type 1: v name a akta int type er vector ba array declare korlam. Jar vector ba array er size 0;

    vector<int> v(5, -1); //  Type 2: int type er  v name a akta vector declare korlam. Jar size 5. v(1st perameter size mean kore, 2nd perameter initial value); v() er second perameter a jei value dibo. array er all index er initial value hisabe sei value set hoia jabe.

    // vector ba array er size ber korar function
    cout << v.size() << endl;

    // v2 namer akta vector declare korlam and v vector er value copy kore v2 te set koresi.
    vector<int> v2(v); // Type 3:

    // normal array declare kore vector er moddhe copy kore bosabo.
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v3(arr, arr + 5); // Type 4: normal array er value copy kore vector er moddhe set korar jonno array er koto number index theke kon index porjonto copy korbo. seita bole dita hoi.

    // normaly array jemon direct {} bracket dia value gulo dita pari, vector ew similarly declare kora jai.
    vector<int> v4 = {1, 2, 3, 4}; // Type 5:
    // vector er all element k e print korbo
    for (int i = 0; i < v.size(); i++)
    {
        cout << v3[i] << " ";
    }

    return 0;
}