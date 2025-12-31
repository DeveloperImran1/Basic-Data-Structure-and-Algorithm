#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;    // Order of 1 -> aitake shortly likha hoi: O(1);
    cin >> n; // Order of 1

    // Linear complexity
    for (int i = 1; i <= n; i++) // Order of n --> aikhane n or n*2 or n/2 jodi kori condition part a, tahole loop sonkhar temon besi kono different hobena. So all time ee amra ai program er complexity Order of n bolte pari.
    {
        cout << i << endl; // Order of 1
    }

    // Logarithmic complexity: Kono loop er increment or decrement part jodi multiple (*) or divided (/) onujaie bare ba kome. Tahole take logarithmic complexity bole.
    for (int i = 1; i <= n; i *= 2) // Jodi i++ or i-- kore value chage hoto tahole n er value 1000 hole 1000 bar or 500 bar loop cholto. Jeita prai n er soman. But i *= 2; hole n=1000 er khetre only 10 bar loop cholbe. Jeita n er theke onek kom. So tokhon linear complexity na bole, take Logarithmic complexity bole. Aitake shortly bola hoi Order of Log N bole: O(log N);
    {
        cout << i << endl; // Order of 1
    }
    return 0;
}

// Aro kiso logarithmic complelxity program er example:
// Ex: 1
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = n; i > 0; i /= 2) // aikhane loop er increment or decrement part ta i er sathe devide use kore bartese.
//     {
//         cout << i << endl;
//     }

//     return 0;
// }

// Ex: 2
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = n; i > 0; i++)
//     {
//         cout << i << endl;
//         i *= 2; // aikhane loop er increment or decrement part ta i er sathe 2 multiple kore bartese.
//     }

//     return 0;
// }