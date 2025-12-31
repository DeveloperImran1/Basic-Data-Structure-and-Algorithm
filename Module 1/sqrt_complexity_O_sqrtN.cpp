#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // ai condition true hobe, jotokkhon n er sqrt er value er theke soto hobe. Ex: n=100 hole loop ta 10 porjonto cholbe. Ai loop er n ke 2 dara multiple or devide kora nai. Tai aita Order of n complexity noi. Abar aitar increment or decrement part a multiple or devide kora nai. Tai aita logarithmic complexity noi. Aita holo Order of sqrt N complexity. Jake shortly likha hoi: O(sqrt(N));
    for (int i = 1; i <= sqrt(n); i++)
    {
        cout << i << endl;
    }

    return 0;
}

// ----------------------------ex2--------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // Order of n complexity: O(n) --> jar complexity besi.
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " "; // Output: 1 2 3 4 6 9 12 18 36  --> aikhane output gulo pawer jonno 1 to n porjonto loop chalte hosse. Jeitar complexity besi. Amra chaile aro kom sonkhok loop chailea ai output ber korte pari. Aitai holo complexity ke komia ana. Amra jodi output er dika dekhi, tahole n er sqrt er value holo 6. Akhon 1, 2, 3, 4, 6 er por jei value gulo ase tader ke ber korar jonno jodi amra n/1, n/2, n/3, n/4, n/6 korle baki output gulo pawa jasse. Thats mean n er sqrt porjonto loop chalalei all output pawa jasse. jar fole complexity kom hosse.
        }
    }

    cout << endl;

    // sqrt of n complexity: O(sqrt(n)); --> jar Complexity ke reduce kore, kom koresi.
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }

    // uporere condition take aiabew likha jai:
    // - aikhane i*i <= n;
    // - i^2 <= n;
    // - i <= sqrt(n);
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " " << n / i << " ";
        }
    }

    return 0;
}