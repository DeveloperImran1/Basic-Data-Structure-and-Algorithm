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

void delete_at_any_position(Node *&head, Node *&tail, int idx)
{

    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    Node *deleted_node = tmp->next;
    tmp->next->next->prev = tmp;
    tmp->next = tmp->next->next;
    delete deleted_node;
}

int main()
{

    Node *head = new Node(10);

    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    head->next = a;

    a->prev = head;
    a->next = b;

    b->prev = a;
    b->next = tail;

    tail->prev = b;

    print_forward(head); // Output: 10 20 30 40

    delete_at_any_position(head, tail, 2);

    print_forward(head); // Output: 10 20 40

    return 0;
}