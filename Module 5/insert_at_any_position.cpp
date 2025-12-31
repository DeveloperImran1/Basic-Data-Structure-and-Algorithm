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

void insert_to_any_position(Node *&head, int idx, int val)
{
    Node *new_node = new Node(val);

    Node *temp = head;
    // loop er maddhome insert index er ager index a nia jabo temp ke.
    for (int i = 1; i < idx; i++)
    {
        temp = temp->next;
    }

    // upore loop er maddhome temp node ke insert index er ager index a nia asci. Akhon insert korar index a jei node silo. Sei node er next a jei value silo, take akta variable er moddhe store kortesi. Karon insert kora index er ager index a thaka node er next change hobe. Tokhon ar next er value ke pawa jabena. Tai store kore rakhtesi.
    Node *after_idex_node = temp->next;

    // new_node er address ta insert index er ager index er next a set kortesi.
    temp->next = new_node;

    // new node er next a oi uporer store kora address ta set kortesi.
    new_node->next = after_idex_node;
};

void print_linked_list(Node *head)
{

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

    insert_to_any_position(head, 2, 100);

    print_linked_list(head);
    return 0;
}