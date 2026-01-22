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

void insert_at_head(Node *&head, Node *&tail, int val)
{

    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }

    head->prev = new_node;
    new_node->next = head;
    head = new_node;
}
void insert_at_tail(Node *&head, Node *&tail, int val)
{

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

void insert_at_any_position(Node *&head, Node *&tail, int idx, int val)
{

    Node *tmp = head;
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    for (int i = 0; i < idx - 1; i++)
    {
        tmp = tmp->next;
    }

    new_node->prev = tmp;
    new_node->next = tmp->next;
    tmp->next->prev = new_node;
    tmp->next = new_node;
}

void print_forward(Node *head)
{
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void print_backward(Node *tail)
{
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }
}

int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

    while (t--)
    {
        int idx, val;
        cin >> idx >> val;

        if (idx > size)
        {
            cout << "Invalid" << endl;
            continue;
        }

        if (idx == 0)
        {
            size++;
            insert_at_head(head, tail, val);
        }
        else if (idx == size)
        {
            size++;
            insert_at_tail(head, tail, val);
        }
        else
        {
            size++;
            insert_at_any_position(head, tail, idx, val);
        }

        print_forward(head);
        cout << endl;
        print_backward(tail);
        cout << endl;
    }

    return 0;
}