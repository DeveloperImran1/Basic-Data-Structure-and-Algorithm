#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {1, 2, 3, 4, 5};
    list<int> l2 = l; // aivabe akta list er value arekta list a assign kore jai.

    // aivabew assign() function er madhome arekta liser node arekta list a copy kora jai. Tokhon perameter a iterator er maddhome start node and end node ta bole dita hoi.
    list<int> l3;
    l3.assign(l.begin(), l.end());

    // list er tail a and head a push korar system
    l.push_back(100);
    l.push_front(10);

    // list er last theke and start theke node delete korar system
    l.pop_back();
    l.pop_front();

    // kono list er jekono element ke print korar jonno next() function use korte pari. er 1st perameter a list er 1st element er pointer dita hoi and 2nd perameter a bole dita hoi koita element skip korbe ba koto number index a er value get korbo. Jeheteto next() function pointer return kore, tai * use korte hobe.
    cout << *next(l.begin(), 4) << endl;

    // list er jekono position a value insert korar jonno insert() function use hoi. insert function er 1st perameter a index bole dita hoi, je kon index a value insert korbo. and 2nd index a value dita hoi. Jeheto amra list a index nei. Tai next() function er maddhome position er address ta bole dei.
    // l.insert(next(l.begin(), 2), 100);  // akta value insert

    // akadhik value or onno akta list, array, vector ke aivabe insert kora jai.
    list<int> l5 = {100, 200, 300};
    l.insert(next(l.begin(), 2), l5.begin(), l5.end());

    for (int it : l)
    {
        cout << it << " ";
    }

    return 0;
}