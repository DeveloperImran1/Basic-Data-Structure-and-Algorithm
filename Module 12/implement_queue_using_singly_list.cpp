#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int val)
    {
        sz++; // size barassi
        Node *new_node = new Node(val);

        if (head == NULL)
        {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        tail = new_node;
    }

    void pop()
    {
        sz--; // size komassi.
        Node *deleted_node = head;
        head = head->next;
        delete deleted_node;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        return head->val;
    }
    int back()
    {
        return tail->val;
    }
    int size()
    {
        return sz;
    }

    bool empty()
    {
        return head == NULL; // size 0 hole true return korbe. Ar kono element thakle false return korbe.
    }
};

int main()
{
    myQueue q;

    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    // cout << q.front() << " " << q.back() << " " << q.size() << " " << q.empty() << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}