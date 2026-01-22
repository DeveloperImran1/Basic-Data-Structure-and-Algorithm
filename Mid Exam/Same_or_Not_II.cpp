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
        this->prev = NULL;
    }
};

class myStack
{

public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    void push(int val)
    {
        size++;
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
        if (size == 0)
        {
            return;
        }
        else if (size == 1)
        {
            size--;
            Node *deleted_node = tail;
            tail = NULL;
            head = NULL;
            delete deleted_node;
        }
        else
        {
            size--;
            Node *deleted_node = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete deleted_node;
        }
    }

    bool empty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int top()
    {
        return tail->val;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    void push(int val)
    {
        size++;
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
        if (size == 0)
        {
            return;
        }
        else if (size == 1)
        {
            size--;
            Node *deleted_node = head;
            tail = NULL;
            head = NULL;
            delete deleted_node;
        }
        else
        {
            size--;
            Node *deleted_node = head;
            head = head->next;
            head->prev = NULL;
            delete deleted_node;
        }
    }

    bool empty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {

            return false;
        }
    }

    int front()
    {
        return head->val;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    myStack st1;
    myQueue q1;

    while (n--)
    {
        int val;
        cin >> val;
        st1.push(val);
    }

    while (m--)
    {
        int val;
        cin >> val;
        q1.push(val);
    }

    while (!st1.empty())
    {
        if (st1.top() != q1.front())
        {
            cout << "NO";
            return 0;
        }
        st1.pop();
        q1.pop();
    }

    cout << "YES";

    return 0;
}