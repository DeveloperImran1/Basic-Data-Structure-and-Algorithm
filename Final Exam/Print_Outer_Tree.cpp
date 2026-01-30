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

    Node *root;

    if (v == -1)
    {
        return root = NULL;
    }
    root = new Node(v);

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

void print_left_outer_node(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    if (root->left)
    {
        print_left_outer_node(root->left);
    }
    else if (root->left == NULL && root->right)
    {
        print_left_outer_node(root->right);
    }
    cout << root->val << " ";

    return;
}
void print_right_outer_node(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->val << " ";
    if (root->right)
    {
        print_right_outer_node(root->right);
    }
    else if (root->right == NULL && root->left)
    {
        print_right_outer_node(root->left);
    }

    return;
}

// void get_res(Node *root)
// {
//     vector<int> v;
//     if (root == NULL)
//     {
//         return;
//     }

//     queue<pair<Node *, int>> q;
//     q.push({root, 0});

//     while (!q.empty())
//     {
//         pair<Node *, int> p = q.front();
//         Node *node = p.first;
//         int level = p.second;

//         q.pop();

//         // node ke nia kaj korbo

//         // push in queue
//         if (node->left)
//         {
//             q.push({node->left, level + 1});
//         }
//         if (node->right)
//         {
//             q.push({node->right, level + 1});
//         }
//     }
// }

int main()
{
    Node *root = create_binary_tree();
    if (root->left != NULL)
    {
        print_left_outer_node(root);
    }

    if (root->left && root->right)
    {
        print_right_outer_node(root->right);
    }
    else if (root->right != NULL)
    {
        print_right_outer_node(root);
    }

    if (root->left == NULL && root->right == NULL)
    {
        cout << root->val;
    }

    return 0;
}