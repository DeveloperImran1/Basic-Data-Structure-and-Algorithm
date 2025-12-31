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

    // new node create korar somoi head ke function er perameter hisabe diss. Jar fole insert_to_tail_optimised() function er maddhome last a new node insert korar jonno head node ke loop chalia last a nia jate hosse. Jar fole O(N) complexity hosse. Aita optimised korar jonno arekta pointer nibo, jeita last node ke point kore rakhbe.
    Node *tail = b;

    // node gulor next er value hisabe address set kortesi.
    head->next = a;
    a->next = b;

    insert_to_tail_optimised(head, tail, 100);
    print_linked_list(head);

    // aikhane tail er value ke print korle dekha jabe, tail pointer akhon last node ke point kortese.
    cout << tail->val << endl;
    return 0;
}