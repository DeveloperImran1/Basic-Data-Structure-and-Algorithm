#include <bits/stdc++.h>
using namespace std;

int calculate_sum(int n, vector<int> v)
{

    vector<int> prefix_sum(n);
    prefix_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = prefix_sum[i - 1] + v[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << prefix_sum[i] << " ";
    }

    return 0;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    calculate_sum(n, v);

    return 0;
}