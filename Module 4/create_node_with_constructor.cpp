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
        this->next = NULL; // initialy all node er next property er value null rakhtesi. Pore manualy address gulo set koresi.
    }
};

int main()
{
    Node a(10), b(20), c(40);

    a.next = &b;
    b.next = &c;

    cout << a.val << " " << b.val << " " << c.val << endl;
    cout << (*a.next).val << endl; // Output: 20

    cout << a.next->next->val << endl; // Output: 40

    return 0;
}