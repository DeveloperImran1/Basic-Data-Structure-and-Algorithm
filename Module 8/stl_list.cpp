#include <bits/stdc++.h>
using namespace std;

int main()
{
    // linked list er maddhome amra manualy Node gulo create korte hoto. But linekd list er ai manual kaj gulo stl er built in method list er maddhome easily kora jai. Thats mean list holo akdhoroner Doubly linked list. Jar moddhe node thake. kono index thakena. pointer ba address er maddhome sobar sathe connect thake.

    // list<int> l; // l namer akta list create korbe. jar size 0 thakbe.
    // list<int> l(10); // l namer akta list create korbe. Jar size 10 thakbe.
    // cout << l.size() << endl;

    list<int> l(10, 2); // l namer akta list thakbe. Jar size 10 thakbe and initialy sobar value 2 hobe.
    // cout << l[3] << endl;  // aivabe index dara kono node ke get kora jabena.
    cout << *l.begin() << endl; // l list er begin ba 1st node er value ke print korlam. Jeheto list akta pointer. Tai dereference kore print korte hobe.

    // loop and iterator use kore all node ke print korbo
    // for (auto it = l.begin(); it != l.end(); it++)
    // {
    //     cout << *it << " ";
    // }

    // shortcut for loop ba range based for loop. list er khetre ai range based for loop use korbo amra. Karon list a kono index nia kaj korte hoina.
    // for (int val : l)
    // {
    //     cout << val << " ";
    // }

    // Array copy system
    list<int> l2 = {1, 2, 3, 4, 5};
    list<int> l3(l2); // l2 list er value gulo l3 te copy hoia gelo.

    // Aikhane new list er moddhe onno akta array ba vector kew copy kore rakha jai. se khetre kon index theke kon index porjonto store korbo, seita pointer er maddhome bole dita hobe.
    int arr[5] = {10, 20, 30, 40, 50};
    list<int> l4(arr, arr + 5);

    vector<int> v = {100, 200, 300, 400, 500};
    list<int> l5(v.begin(), v.end());
    for (int val : l5)
    {
        cout << val << " ";
    }
    return 0;
}