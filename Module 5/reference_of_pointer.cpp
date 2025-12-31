#include <bits/stdc++.h>
using namespace std;

void fun(int *p)
{
    *p = 50;
    cout << "before reassign in fun: " << p << endl; // Output: before reassign in fun: 0x61fe14
    // [Note: aikhane direct p ke dereference kore akta value assign koresi, jar fole aita main() er moddhe thaka p er value kew change korbe. But nicher moto onno arekta varible dara dereference korle p er address changed hoia jabe.]

    int y = 20;
    p = &y;
    cout << "after reassign in fun: " << p << endl; // Output: after reassign in fun: 0x61fddc
    // [Note: fun er moddhe asa pointer variable er address ta main fun er moddha thaka p er address equal. But aikhane p variable er value ke abar &y er address dara reassign korai p er address ta change hoia gese. Jar fole main() er moddhe thaka p er value kono changes hobena. Ai obosthaioo jodi p pointer er address same main() er address tai rakhte chai, tahole function declare korar somoi p ke aivabe likhte hobe: void fun(int* &p){} ]
}

int main()
{
    int x = 10;
    int *p = &x;
    fun(p);
    cout << "in main: " << p << endl; // Output: in main: 0x61fe14

    return 0;
}