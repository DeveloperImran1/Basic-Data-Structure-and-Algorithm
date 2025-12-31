// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v;

//     cout << v.capacity() << endl; // output: 0

//     v.push_back(10);
//     cout << v.capacity() << endl; // output: 1

//     v.push_back(10);
//     cout << v.capacity() << endl; // output: 2

//     v.push_back(10);
//     cout << v.capacity() << endl; // output: 4

//     v.push_back(10);
//     cout << v.capacity() << endl; // output: 4

//     v.push_back(10);
//     cout << v.capacity() << endl; // output: 8

//     // [Note: aikhane vectorName.capacity() method oi vector er capacity ba koita element ase, seita output a dei. Ai capacity er interesting bisoy holo output a all capacity ta all time double kore. Mane 1 ta element thakle output a 1 dei. 2 ta thakle 2 dei. 3 ta thakle 2 er double 4 dei. 4 ta thakle 4 dei. abar 5, 6, 7, 8 ta thakle 8 diba. jotokkhon na porjonto ager value ke element sonkha overtake kortesena.]
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    cout << v.size() << endl; // Output: 3
    // v.clear();                // vectorName.clear() function vector er size ke 0 kore. But vector a jei value gulo silo index a, seigulo ke jor kore access kora jai.
    cout << v.size() << endl; // Output: 0

    cout << v[0] << " "; // Output: 10
    cout << v[1] << " "; // Output: 20
    cout << v[2] << " "; // Output: 30

    // vector empty naki ta output a dei. Jodi 1 ta ba tar besi element thake, tahole output 0 asbe.
    cout << v.empty() << endl;

    // vector er jei size silo, seitake modify kore 2 koresi ba komaisi. Jodi age size thakto 5. ar resize kore jodi 10 kori tahole porer 5 ta index a initial value set kore dita pari resize() er second perameter er maddhome.
    // v.resize(2);
    v.resize(7, -1); // resize(vector er size koto hobe, ager size theke porer new index er initial value ki hobe);
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}