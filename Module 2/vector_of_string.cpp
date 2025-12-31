#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    cin.ignore(); // namer moddhe space thakle input newer somoi getline() er maddhome input nita hobe. Ar getline er maddhome input nila uporer n er por jei enter chappo, seitake ignore korar jonno cin.ignore() use korte hobe.
    vector<string> names(n);
    for (int i = 0; i < n; i++)
    {
        // cin >> names[i];  // for without space
        getline(cin, names[i]); // with space
    }

    for (string name : names)
    {
        cout << name << endl;
    }

    return 0;
}