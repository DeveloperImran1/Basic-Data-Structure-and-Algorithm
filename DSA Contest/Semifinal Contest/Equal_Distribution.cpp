#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;

    long long int per_student_take = k / n;
    long long int remaining_choc = k - (per_student_take * n);
    cout << per_student_take << " " << remaining_choc;
    return 0;
}