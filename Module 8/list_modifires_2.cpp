#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10, 20, 30, 40, 50};

    // list theke kono value ke delete korar jonno listName.erase(); erase() er moddhe jei element ke delete korbo, sei element er pointer ta dita hobe. jodi akadhik value delete korte hoi. Tahole 1st pointer and jei element porjonto delete korbo, tar porer element er pointer dita hobe.
    // l.erase(next(l.begin(), 1));
    // l.erase(next(l.begin(), 1), next(l.begin(), 4));

    // replace() function er maddhome kno value ke replace kora jai. ai function er 1st, 2nd perameter a range nei, je koto range er moddhe replace korbe. 3rd perameter a value nei, jei value ke replace korte chassi. ar 4th perameter a bolte hoi, replace kore new ki value set korbo. Aikhane 20 ke replace kore 100 set hobe.
    replace(l.begin(), l.end(), 20, 100);

    // find() function er 1st 2ta perameter a range dita hoi. ar 3rd perameter a bolte hoi kon value ke find kortesi. Jodi find kore khuje na pai tahole aita list er end location return korbe. Ar khuje pawa gele oi value return korbe. Tai it namer auto type er variable a store koresi and condition dia found kina result boltesi.
    auto it = find(l.begin(), l.end(), 10);
    if (it == l.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "found" << endl;
    }

    for (int val : l)
    {
        cout << val << " ";
    }
    return 0;
}