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

void insert_at_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->prev = tail;
    tail->next = new_node;
    tail = new_node;
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
    insert_at_tail(head, tail, 100);

    print_forward(head); // Output: 10 20 30 100

    return 0;
}