#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n]; // array declare korar somoi [] er moddhe size bole dita hoi. Ar ai size bola ta mendatory.

    vector<int> v(n); // vector declare korar somoi size ta () er moddhe bolte hoi. vector a size bola mendatory noi.

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // jodi vector declare korar somoi size na boli tahole input ar index er maddhome nita parbona. arrName.pushback() er maddhome set korte hobe.
    vector<int> v2;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v2.push_back(x);
    }

    // print out vector all element.
    for (int i = 0; i < n; i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}