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

void is_palindrome(Node *&head, Node *&tail)
{
    Node *tmp_head = head;
    Node *tmp_tail = tail;

    int palindrome = 1;
    while (tmp_head != tmp_tail)
    {
        if (tmp_head->val != tmp_tail->val)
        {
            palindrome = 0;
            break;
        }
        tmp_head = tmp_head->next;
        tmp_tail = tmp_tail->prev;
    }

    if (palindrome)
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

    is_palindrome(head, tail);

    return 0;
}