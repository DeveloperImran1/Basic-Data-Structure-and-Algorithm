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

void insert_to_tail_optimised(Node *&head, Node *&tail, int val)
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

void insert_to_any_position(Node *head, int idx, int val)
{
    Node *new_node = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next = new_node;
    if (idx == 0)
    {
        head = new_node;
    }
}

int count_node(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
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
        insert_to_tail_optimised(head, tail, val);
    }

    int n;
    cin >> n;
    while (n--)
    {
        int total_node = count_node(head);

        int idx, val;
        cin >> idx >> val;

        if (idx > total_node)
        {
            cout << "Invalid " << endl;
            continue;
        }
        insert_to_any_position(head, idx, val);
        print_linked_list(head);

        cout << endl;
    }

    return 0;
}