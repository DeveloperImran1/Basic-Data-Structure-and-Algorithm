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
    head = new_node;
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
void delete_at_any_position(Node *&head, Node *&tail, int idx)
{
    if (idx == 0)
    {
        Node *tmp_head = head->next;
        head = tmp_head;
        // delete tmp_head;
    }
    else
    {
        int count = count_all_node(head) - 1;

        Node *tmp = head;
        for (int i = 1; i < idx; i++)
        {
            tmp = tmp->next;
        }

        if (count == idx)
        {
            tail = tmp;
            tail->next = NULL;

            Node *deleted_node = tmp->next;
            tmp->next = NULL;
            delete deleted_node;
        }
        else
        {
            Node *deleted_node = tmp->next;
            tmp->next = tmp->next->next;
            delete deleted_node;
        }
    }
}

void print_all_linked_list(Node *&head)
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

    int n;
    cin >> n;
    while (n--)
    {
        int x, v;
        cin >> x >> v;
        if (x == 0)
        {
            insert_to_head(head, tail, v);
        }
        else if (x == 1)
        {
            insert_to_tail(head, tail, v);
        }
        else if (x == 2)
        {
            int count = count_all_node(head);
            if (v < count)
            {
                delete_at_any_position(head, tail, v);
            }
        }

        print_all_linked_list(head);
        cout << endl;
    }

    return 0;
}