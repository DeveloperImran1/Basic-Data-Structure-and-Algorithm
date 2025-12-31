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
void insert_to_tail_optimised(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    // jodi main linked list a kono node na thake. I mean head node null hole new node take head a set kore dilai enough.
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return; // head a new_node set kore dilai enough, nicher ar knono kaj korte hohbena tai return kore dibo.
    }

    tail->next = new_node;
    // tail er next a new node er address ta set kore connection korlam. Kinto tail ke akhon last node a nia jate hobe
    tail = new_node;
};

// link list gulo print korar function.
void print_linked_list(Node *head)
{

    while (head != NULL)
    {
        cout << head->val << endl;
        head = head->next;
    }
}

// delete head node
void delete_at_head(Node *&head)
{
    // head ke akta variable a store kore rakhtesi, karon head ke porer node a move korabo.
    Node *deleted_node = head;

    // head node ke porer node a travers korlam.
    head = head->next;

    // dynamic variable ba node ke delete korarr jonno delete keyword use kora hoi.
    delete deleted_node;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }

        insert_to_tail_optimised(head, tail, val);
    }

    // linked list theke head node ke delete korbo.
    delete_at_head(head);
    delete_at_head(head);

    // print kortesi all node ke
    print_linked_list(head);

    return 0;
}