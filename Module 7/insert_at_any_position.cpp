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

void insert_at_any_position(Node *head, int idx, int val)
{

    Node *new_node = new Node(val);

    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    tmp->next->prev = new_node;
    new_node->next = tmp->next;
    new_node->prev = tmp;
    tmp->next = new_node;
}

int main()
{
    // initialy head and tail er value null rakhtesi
    // Node *head = NULL;
    // Node *tail = NULL;

    // initaily head and tail er value set kortesi.
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *tail = new Node(30);

    head->next = a;

    a->prev = head;
    a->next = tail;

    tail->prev = a;

    print_forward(head); // Output: 10 20 30

    // index jodi head or tail er index hoi, tahole ai function kaj korbena.
    insert_at_any_position(head, 3, 100);

    print_forward(head); // Output: 10 20 100 30

    return 0;
}