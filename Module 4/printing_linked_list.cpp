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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;

    // Linked list er kono index nai. Tai linked list ke head er maddhome aivabe print korte hobe. Without loop
    // cout << head->val << endl;
    // cout << head->next->val << endl;
    // cout << head->next->next->val << endl;
    // cout << head->next->next->next->val << endl;

    // print using loop
    Node *temp_head = head; // main head er value jodi change kori, tahole main head er valo ar kokhono access korte parbona. Tai temp_head er moddhe head er value assign kore loop er moddhe value change korbo. Jar fole pore abar temp_had er value null holew abar 1st node a nia asa jabe temp_head = head; er maddhome.
    while (temp_head != NULL)
    {
        cout << temp_head->val << endl;

        // temp_head er value every loop a porer node a change kore dissi.
        temp_head = temp_head->next;
    }

    // temp_head er value abar notun theke suro hobe.
    temp_head = head;
    while (temp_head != NULL)
    {
        cout << temp_head->val << endl;

        temp_head = temp_head->next;
    }
    return 0;
}