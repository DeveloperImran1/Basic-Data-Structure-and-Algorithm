#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l(10, 3);
    cout << l.size() << endl;     // l list er size print korbe.
    cout << l.max_size() << endl; // amar computer maximum koto size er int value nita parbe.

    // l.clear(); // list er size 0 kore diba.
    cout << *l.begin() << endl;

    // list a kono value na thakle true return korbe.
    if (l.empty())
    {
        cout << "list empty" << endl;
    }

    // l list er size change kora jai. age 10 ta node silo. But akhon jodi resize kore besi kori, tahole 1st 10 ta node er porer node gulo te 0 set hobe.
    // l.resize(5);
    // l.resize(20);
    l.resize(20, 100);

    for (int val : l)
    {
        cout << val << " ";
    }

    return 0;
}