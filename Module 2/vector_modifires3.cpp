#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // kono index er value access
    cout << v[2] << endl;

    // vector er last index prnt korbe. aita ke amra v.back() er alternative hisabe v.size() - 1; aivabew likhte pari.
    cout << v.back() << endl;

    // vector er 0 number index prnt korbe. aita ke amra v.front() er alternative hisabe v[0]; aivabew likhte pari.
    cout << v.front() << endl;

    return 0;
}