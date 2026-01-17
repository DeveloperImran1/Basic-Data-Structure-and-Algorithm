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

    // aivabe kora jabena. Karon aivabe loop chalale complexity O(N) hosse. But amra vector or list dia size implemet kroar somoi O(1) dia koresi. So complexity komate hobe.
    // int size()
    // {
    //     Node *tmp_head = head;
    //     int count = 0;
    //     while (tmp_head != NULL)
    //     {
    //         count++;
    //         tmp_head = tmp_head->next;
    //     }
    //     return count;
    // }

    // Complexity O(1) hobe aikhane. amra linked list er size take all time track rakhesi. Jokhon node push hobe, tokhon sz variable er value plus korsi and pop hole minus koresi. Aivabe size take track rakhtesi.
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

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}