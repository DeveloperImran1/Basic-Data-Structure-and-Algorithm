#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *create_binary_tree()
{
    int v;
    cin >> v;
    Node *root = new Node(v);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        // node create with get input
        int l, r;
        cin >> l >> r;

        Node *left, *right;
        if (l == -1)
        {
            left = NULL;
        }
        else
        {
            left = new Node(l);
        }

        if (r == -1)
        {
            right = NULL;
        }
        else
        {
            right = new Node(r);
        }

        // linkup with parent
        p->left = left;
        p->right = right;

        // queue te push
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    return root;
}

// void print_node(Node *root)
// {
//     if (root == NULL)
//     {
//         return;
//     }

//     queue<Node *> q;
//     q.push(root);
//     while (!q.empty())
//     {
//         Node *p = q.front();
//         q.pop();

//         cout << p->val << " ";

//         // push in queue
//         if (p->left)
//         {
//             q.push(p->left);
//         }
//         if (p->right)
//         {
//             q.push(p->right);
//         }
//     }
// };

void sum_without_leaf_node(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    queue<Node *> q;
    q.push(root);

    int result = 0;

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        if (p->left || p->right)
        {
            result += p->val;
        }

        // push in queue
        if (p->left)
        {
            q.push(p->left);
        }
        if (p->right)
        {
            q.push(p->right);
        }
    }

    cout << result;
};

int main()
{
    Node *root = create_binary_tree();
    // print_node(root);
    sum_without_leaf_node(root);
    return 0;
}