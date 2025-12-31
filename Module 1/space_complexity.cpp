// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n; // order of 1 complexity
//     cin >> n;
//     int sum = 0; // order of 1 complexity

//     for (int i = 0; i < n; i++) // Aikhanew order of 1 complexity thakbe. Karon aikhane i akbar ee declare kora hoiase. Loop er protibare i ke notun kore declare kora hoini. 1 bar declare koresi tai ai program er space complexity 1. Aita input er man er upor depend korena.
//     {
//         sum += i;
//     }
//     cout << sum;

//     return 0;
// }

// ---- Order of N --------------------------------->
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n; // order of 1 complexity
//     cin >> n;
//     int nums[n]; // order of n complexity

//     for (int i = 0; i < n; i++) // Aikhanew order of 1 complexity thakbe. Karon aikhane i akbar ee declare kora hoiase. Loop er protibare i ke notun kore declare kora hoini. 1 bar declare koresi tai ai program er space complexity 1.
//     {
//         cin >> nums[i];
//     }

//     return 0;
// }

// ---- Order of N*N --------------------------------->
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; // order of 1 complexity
    cin >> n;
    int nums[n][n]; // order of n^2 complexity

    for (int i = 0; i < n; i++) // Aikhanew order of 1 complexity thakbe. Karon aikhane i akbar ee declare kora hoiase. Loop er protibare i ke notun kore declare kora hoini. 1 bar declare koresi tai ai program er space complexity 1.
    {
        cin >> nums[i][i];
    }

    return 0;
}