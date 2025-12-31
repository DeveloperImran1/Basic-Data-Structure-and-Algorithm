#include <bits/stdc++.h>
using namespace std;

// Node create korar class.
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
void insert_to_tail(Node *&head, int val)
{
    Node *new_node = new Node(val);

    // jodi main linked list a kono node na thake. I mean head node null hole new node take head a set kore dilai enough.
    if (head == NULL)
    {
        head = new_node;
        return; // head a new_node set kore dilai enough, nicher ar knono kaj korte hohbena tai return kore dibo.
    }

    Node *temp = head;
    // temp node ke last node a nia jassi.
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // now head node is last node and theke head node convert to new_node.
    temp->next = new_node;
};

// link list gulo print korar function.
void print_linked_list(Node *head)
{
    // head er value jotokkhon na null hosse, totokkhon choltei thakbe loop. Karon last node er head null hobe.
    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

int main()
{
    // 3 ta node create.
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);

    // node gulor next er value hisabe address set kortesi.
    head->next = a;
    a->next = b;

    insert_to_tail(head, 100);
    insert_to_tail(head, 200);
    insert_to_tail(head, 300);
    print_linked_list(head);
    return 0;
}