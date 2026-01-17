#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // vector declare
    list<int> l;   // list declare
    stack<int> st; // stack declare

    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}