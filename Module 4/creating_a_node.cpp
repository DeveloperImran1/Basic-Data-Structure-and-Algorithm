#include <bits/stdc++.h>
using namespace std;

// Linked list er every element a akta kore node thakbe. Sei node er moddhe akta kore value thakbe and porer node er address thakbe, tai class er maddhome ai kaj kortesi.
class Node
{
public:
    int val;    // int or string jekono data type er value thakbe.
    Node *next; // porer node er addres. Jeheto akta node er moddhe val, next 2ta property thake. Tai akta node er data type hobe ai class er name tai. Ar aijonno Node *next; use kora hoiase.
};

int main()
{
    // class er maddhome node declare and value set.
    Node a, b, c;
    a.val = 10;
    b.val = 20;
    c.val = 30;

    // node er next property er moddhe address set kortesi. I mean akta node arekta node er sathe linked kortesi.
    a.next = &b;
    b.next = &c;
    c.next = NULL;

    cout << a.val << " " << b.val << " " << c.val << endl; // value print without using next address.
    cout << (*a.next).val << endl;                         // Output: 20 -> a node er next property te thaka address er maddhome porer node er value print kortesi. aikhane a.next = b node er address. So a.next ke dereference korle *a.next = b er val, next property 2ta ke access korte parbo.

    cout << a.next->next->val << endl; // Output: 30

    return 0;
}