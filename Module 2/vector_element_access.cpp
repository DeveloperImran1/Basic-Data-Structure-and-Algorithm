#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    for (auto it = v.begin(); it < v.end(); it++)
    {
        cout << *it << " "; // aikhane v.begin(); akta iterator, jeita index er position return kore. So position er value ke print korar jonno direference kore print korte hobe.
    }
    return 0;
}