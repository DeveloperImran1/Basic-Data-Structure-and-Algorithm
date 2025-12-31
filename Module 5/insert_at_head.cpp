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

// new node left site a add korar function. Jeita perameter a 1st node and new node (jei node create korbo) er value ke nei. Aikhane Node *head. aivabe dilai hoto. But Node *&head. aivabe diasi karon function er moddhe head er address ke change koresi. Node *&head aivabe na dila main() er moddhe head a kono changes asbena.
void insert_to_head(Node *&head, int val)
{
    Node *new_head = new Node(val); // new akta head create kortese, value hisabe perameter theke value ke nissa.
    new_head->next = head;          // new jei head create holo tar next a main head er address ta set kore dissa.
    head = new_head;                // new_head 1st a add howai, akhon main head hobe new_head. Karon new_head thkei element suro. Tai head er address reassign kore new_head er address set kore dilam.
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

    insert_to_head(head, 100);
    insert_to_head(head, 200);
    insert_to_head(head, 300);
    print_linked_list(head);
    return 0;
}