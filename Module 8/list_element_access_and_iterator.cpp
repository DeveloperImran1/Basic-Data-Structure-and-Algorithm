#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {20, 70, 90, 70, 10, 20, 30, 40, 50};

    // element access
    cout << l.front() << endl;           // 1st element access
    cout << l.back() << endl;            // last element access
    cout << *next(l.begin(), 2) << endl; // any element access

    // iterator kono akta value er position a point kore. So oi value ke print korar jonno dereference kore print korte hobe.
    cout << *l.begin() << endl;
    cout << *l.end() << endl; // aita last er index er porer position ke point kore, tai last index er value aikhane pabona.

    return 0;
}