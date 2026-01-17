#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->next = NULL;
    }
};

class myStack
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;

    void push(int val)
    {
        sz++; // new element add korle size plus kortesi.
        Node *new_node = new Node(val);
        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
    }

    void pop()
    {
        sz--; //  element remove korle size minus kortesi.
        Node *deleted_node = tail;
        if (tail == head)
        {
            tail = NULL;
            head = NULL;
            return;
        }
        tail->prev->next = NULL;
        tail = tail->prev;
        delete deleted_node;
    }

    int top()
    {
        return tail->val;
    }

    int size()
    {
        return sz;
    }

    bool empty()
    {
        int current_size = size();
        if (!!current_size)
        {
            return false;
        }
        else
        {
            return true;
        }
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

    // 2nd stack
    myStack st2;
    int m;
    cin >> m;
    while (m--)
    {
        int val;
        cin >> val;
        st2.push(val);
    }

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    while (!st2.empty())
    {
        if (st.top() != st2.top())
        {
            cout << "NO" << endl;
            return 0;
        }
        st.pop();
        st2.pop();
    }

    cout << "YES" << endl;
    return 0;
}