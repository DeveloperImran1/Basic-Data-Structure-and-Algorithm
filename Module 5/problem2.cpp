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

    vector<int> v(100, 0);

    while (tmp_node != NULL)
    {
        // cout << tmp_node->val << endl;
        v[tmp_node->val]++;
        tmp_node = tmp_node->next;
    }

    int isDouble = 0;
    for (int i = 0; i < 100; i++)
    {
        if (v[i] > 1)
        {
            isDouble = 1;
            break;
        }
    }
    isDouble ? cout << "YES" : cout << "NO" << endl;
}

int main()
{
    Node *head = new Node(2);
    Node *a = new Node(1);
    Node *b = new Node(5);
    Node *c = new Node(12);
    Node *d = new Node(4);
    Node *e = new Node(8);
    Node *f = new Node(9);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    print_node_at_head(head);

    return 0;
}