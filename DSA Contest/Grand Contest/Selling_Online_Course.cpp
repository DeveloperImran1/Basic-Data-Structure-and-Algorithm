#include <bits/stdc++.h>
using namespace std;

int main()
{

    long double price;
    cin >> price;

    long double benefit = (price / 100) * 20;

    long long int result = 100 / benefit;
    cout << result;

    return 0;
}