#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 70, 90, 70, 10, 20, 30, 40, 50};

    // remove(value); function er maddhome kono list theke fixed kono value jotogulo ase, sobaike remove kora jai. erase() function a kono index bole dita hoi. Tahole sei index er value remove korto. But remove() function a index bolte hoina. Value bole dita hoi. list er moddhe oi value joto jaigai ase, sobai remove hoia jai.
    // l.remove(10);

    // sorting
    l.sort(); // ascending order a sort korbe.
    // l.sort(greater<>()); // descending order a sort korbe.

    // unique() function pasapasi value jodi same hoi, tahole 1ta value ke rekhe, bakiderke remove kore dei. mane aksathe 3ta 10 ase, tahole oi 3ta 10 er moddhe 1ta rekhe baki 2take remove korbo. Tarpor jodi onno akta value thake and then abar sei ager value ke pai, tahole take remove korbena. Karon unique() sudho pasapasi same value ke remove kore. So unique() use korar age sort() use korte hobe. Tahole all value sort hobe and then unique() properly kaj korbe.
    l.unique();

    // reverse() kono list er last er element gulo ke 1st a nia ase.
    l.reverse();

    for (int it : l)
    {
        cout << it << " ";
    }
    return 0;
}