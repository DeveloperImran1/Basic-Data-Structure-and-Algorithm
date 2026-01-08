#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *prev;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print_forward(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }

    cout << endl;
}

void delete_at_tail(Node *&head, Node *&tail)
{

    if (head == NULL)
    {
        return;
    }

    Node *deleted_node = tail;

    if (head->next == NULL)
    {
        head = NULL;
        tail = NULL;
        delete deleted_node;
        return;
    }

    tail = tail->prev;
    tail->next = NULL;
    delete deleted_node;
}

int main()
{

    Node *head = new Node(10);

    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    print_forward(head); // Output: 10 20 30

    delete_at_tail(head, tail);

    print_forward(head); // Output: 10 20

    return 0;
}