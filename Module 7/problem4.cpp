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

void insert_to_head(Node *&head, Node *&tail, int val)
{
    Node *new_node = new Node(val);

    if (head == NULL)
    {
        head = new_node;
        tail = new_node;
        return;
    }
    new_node->next = head;
    head->prev = new_node;
    head = new_node;
}

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

void insert_at_any_position(Node *&head, int idx, int val)
{
    Node *new_node = new Node(val);
    Node *tmp = head;

    for (int i = 1; i < idx; i++)
    {
        tmp = tmp->next;
    }

    new_node->next = tmp->next;
    tmp->next->prev = new_node;
    new_node->prev = tmp;
    tmp->next = new_node;
}

int count_all_node(Node *&head)
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
void print_all_node(Node *&head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void print_all_node_reverse_way(Node *&tail)
{
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->prev;
    }

    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int idx, val;
        cin >> idx >> val;

        int count = count_all_node(head);

        if (idx == 0)
        {
            insert_to_head(head, tail, val);
        }
        else if (idx == count)
        {
            insert_to_tail(head, tail, val);
        }
        else if (idx > count)
        {
            cout << "Invalid" << endl;
            continue;
        }
        else
        {
            insert_at_any_position(head, idx, val);
        }

        print_all_node(head);
        print_all_node_reverse_way(tail);
    }

    return 0;
}