#include <bits/stdc++.h>
using namespace std;

int main()
{

    stack<int> st;

    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    stack<int> st2;
    st2 = st;
    while (!st2.empty())
    {
        cout << st2.top() << endl;
        st2.pop();
    }

    return 0;
}