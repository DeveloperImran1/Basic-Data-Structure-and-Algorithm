#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l; // aikhane sudho vector er bodole list er declare koresi.

    void push(int val)
    {
        return l.push_back(val);
    }

    void pop()
    {
        return l.pop_back();
    }

    int top()
    {
        return l.back();
    }

    int size()
    {
        return l.size();
    }

    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    myStack st;
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