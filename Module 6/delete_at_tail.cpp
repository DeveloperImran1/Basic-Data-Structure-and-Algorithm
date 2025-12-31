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

// delete tail node. Aikhane tail node kew perameter a nita hobe. karon tail node ke delete korar pore tail pointer er address ta update korte hobe. Tai tail node er age *&tail aivabe niasi. Karon dynamic node ke reassign korle jate main() er moddhew change hoi.
void delete_at_tail(Node *&head, Node *&tail, int idx)
{
    Node *tmp = head;
    // jei index ke delete korbo, tar ager index a nia jabo head ke.
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    // jei node ke delete korbo, tar  address ta store kore rakhtesi.
    Node *deleted_node = tmp->next;
    tmp->next = tmp->next->next;
    delete deleted_node;

    // tail node ba last er node ke delete korlam, so akhon last a jei node a null set korlam take tail kore dibo.
    tail = tmp;
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

    cout << "before delete tail node: " << tail->val << endl;
    // linked list theke fixed kono index er node ke delete korbo.
    delete_at_tail(head, tail, 4);

    // print kortesi all node ke
    print_linked_list(head);
    cout << "after delete tail node: " << tail->val << endl;
    return 0;
}