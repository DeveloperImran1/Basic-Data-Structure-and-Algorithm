#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;       // Order of 1 -> aitake shortly likha hoi: O(1);
    cin >> n;    // Order of 1
    int sum = 0; // Order of 1

    for (int i = 1; i <= n; i++) // Order of n
    {
        sum += i;
    }
    cout << sum << endl; // Order of 1
    return 0;
}

// Akhon uporer program er complexity ber korte hole, sob theke Worst case ke dhorte hobe. Mane besi order jar, take nita hobe. Onno derke ignore korte pari. Karon n er value jodi 1 lokkho hoi. Seikhane 4 plus korle temon kono changes asbena. Tai statick case ke ignore korte pari. So full code er order of complexity hobe Order of n: O(n);
// Jodi loop a n er sathe n*2 or n/2 or 2-3 ta for loop chalai taholeo code er order of complexity hobe Order of n: O(n); Thats mean 2n or n/2 aigulo prai n er soman ee. kisota kom or besi. So seigulo ke n dhorle besi somossa hobena.