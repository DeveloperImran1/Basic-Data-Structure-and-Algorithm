#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<string> l;

    while (1)
    {
        string s;
        cin >> s;
        if (s == "end")
        {
            break;
        }
        l.push_back(s);
    }

    int t;
    cin >> t;

    auto it = l.begin();
    while (t--)
    {
        string ins;
        cin >> ins;
        if (ins == "visit")
        {
            string address;
            cin >> address;

            if (find(l.begin(), l.end(), address) == l.end())
            {
                cout << "Not Available" << endl;
                continue;
            }

            it = find(l.begin(), l.end(), address);
            cout << *it << endl;
        }
        else if (ins == "prev")
        {

            if (it == l.begin())
            {
                cout << "Not Available" << endl;
                continue;
            }
            it--;
            cout << *it << endl;
        }
        else if (ins == "next")
        {
            if (it == --l.end())
            {
                cout << "Not Available" << endl;
                continue;
            }
            it++;
            cout << *it << endl;
        }
    }

    return 0;
}