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

void insert_to_tail(Node *&head, Node *&tail, int val)
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

void print_all_node(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
void is_match_all_node(Node *&head, Node *&head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;

    int is_match = 1;
    while (tmp != NULL || tmp2 != NULL)
    {
        if (tmp == NULL && tmp2 != NULL)
        {
            is_match = 0;
            break;
        }
        else if (tmp != NULL && tmp2 == NULL)
        {
            is_match = 0;
            break;
        }

        if (tmp->val != tmp2->val)
        {
            is_match = 0;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }

    if (is_match)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
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
        insert_to_tail(head, tail, val);
    }

    // 2nd node
    Node *head2 = NULL;
    Node *tail2 = NULL;

    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
        {
            break;
        }
        insert_to_tail(head2, tail2, val2);
    }

    is_match_all_node(head, head2);
    return 0;
}