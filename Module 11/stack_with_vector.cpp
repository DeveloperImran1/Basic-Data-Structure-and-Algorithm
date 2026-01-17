#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    vector<int> v;
    void push(int val)
    {
        return v.push_back(val);
    }

    void pop()
    {
        return v.pop_back();
    }

    int top()
    {
        return v.back();
    }

    int size()
    {
        return v.size();
    }

    bool empty()
    {
        return v.empty();
    }
};

int main()
{
    // myStack class ke use kore st namer akta object create kortesi. jei object er moddhe push, pop, top, size, empty function gulo ase. oi function guloke akhon st object er method hisabe access korte parbo. Ar ai st object dynamic vabe declare korar dorkar nai. Tai normaly declare koresi.
    myStack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << endl;

    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;

    st.pop();
    st.pop();
    if (st.empty() == false)
    {
        cout << st.top() << endl; // top() ke call korar age, check korte hobe stack empty naki. empty hole segmentation falt asbe. tai condition er moddhe likhesi.
    }

    // pop korar agew check korte hobe stack empty kina.
    if (!st.empty())
    {
        st.pop();
    }

    return 0;
}