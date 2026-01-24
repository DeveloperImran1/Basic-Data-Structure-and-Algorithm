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

void level_order(Node *root)
{
    // q namer akta queue nissi. Jar data type hobe Node type er. But aikhane Node er pore * symboll use kora hoiase. karon queue te every node er address push korbo tai. Jemon ta level_order function er perameter a newa hoiase. Akta node er address asbe perameter a.
    queue<Node *> q;

    // 1st a queue te root node ke push korte hobe. Tarpore all node ke loop chalie kaj korte hobe.
    q.push(root);

    while (!q.empty())
    {
        // Step 1: Queue er front node ke ber kore nia asbo and queue theke pop korbo.
        Node *f = q.front();
        q.pop();

        // Step 2: queue theke ber kore nia asa node f ke nia kaj korbo.
        cout << f->val << " ";

        // Step 3: f node er child node gulo ke queue te push kore dibo.
        if (f->left != NULL)
        {
            q.push(f->left);
        }
        if (f->right != NULL)
        {
            q.push(f->right);
        }
    }
}

int main()
{
    Node *root = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    Node *e = new Node(60);

    root->left = a;
    root->right = b;

    a->left = c;

    b->left = d;
    b->right = e;

    level_order(root);
    return 0;
}