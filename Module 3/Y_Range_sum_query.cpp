#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<long long int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    // prefix sum: pre name a new akta vactor nissi. Jar value gulo kromo_jogito_gonosonkha hobe. Aitao loop chalia kortesi, but aita while loop er moddhe nested kortesina. Tai aita O(n*n) hobena. Aita O(n) hobe. Akhon niche pre vector theke kromo_jogito_gonosonkha er moto value gulo access kore calculate kore result ber korte parbo.
    vector<long long int> pre(n + 1);
    pre[1] = a[1];
    for (int i = 2; i <= n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }

    while (q--)
    {

        int l_ind, r_ind;
        cin >> l_ind >> r_ind;

        long long int sum = 0;
        // // aikhane aro akta loop chalar fole ai program er time complexity O(n*n) hosse. Jar fole TLE error dissa. Aita solve korar jonno loop bade onno kono way dia try korte hobe. Ar ta holo Prefix Sum.
        // for (int i = l_ind - 1; i < r_ind; i++)
        // {
        //     sum += a[i];
        // }
        // cout << sum << endl;

        // Prefix sum holo class 9-10 er math boier kromo jogito gonosonkhar moto. Gonosonkha = {10, 20, 30, 40, 50}; Kromo_jogito_gonosonkha = {10, 30, 60, 100, 150}; aivbae calculate hoi. while loop er Upore ber koresi.
        if (l_ind == 1)
        {
            sum = pre[r_ind];
        }
        else
        {
            sum = pre[r_ind] - pre[l_ind - 1];
        }

        cout << sum << endl;
    }

    return 0;
}