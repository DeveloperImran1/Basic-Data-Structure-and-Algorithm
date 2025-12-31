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

void print_node_at_head(Node *head)
{

    Node *tmp_node = head;

    int is_sorted = 0;
    int current_val = tmp_node->val;

    while (tmp_node->next != NULL)
    {

        tmp_node = tmp_node->next;
        if (tmp_node->val < current_val)
        {
            is_sorted = 1;
            break;
        }

        current_val = tmp_node->val;
    }
    is_sorted ? cout << "NO" : cout << "YES" << endl;
}

int main()
{
    Node *head = new Node(3);
    Node *a = new Node(4);
    Node *b = new Node(5);
    Node *c = new Node(6);
    Node *d = new Node(7);
    Node *e = new Node(8);
    Node *f = new Node(4);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    print_node_at_head(head);

    return 0;
}