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

void insert_to_tail(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    tail->next = new_node;
    tail = new_node;
}

void print_all_linked_list(Node *&head)
{
    Node *tmp = head;
    int min_value = INT_MAX;
    int max_value = INT_MIN;

    while (tmp != NULL)
    {
        if (min_value > tmp->val)
        {
            min_value = tmp->val;
        }
        if (max_value < tmp->val)
        {
            max_value = tmp->val;
        }

        tmp = tmp->next;
    }

    cout << max_value - min_value;
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

    print_all_linked_list(head);
    return 0;
}