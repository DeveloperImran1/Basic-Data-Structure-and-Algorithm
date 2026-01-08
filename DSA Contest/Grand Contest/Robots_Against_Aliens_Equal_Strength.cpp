#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int r, c;

    cin >> r >> c;

    if (r == 1)
    {
        cout << "YES";
        return 0;
    }

    long long int power[r][c];

    for (long long int i = 0; i < r; i++)
    {
        for (long long int j = 0; j < c; j++)
        {
            cin >> power[i][j];
        }
    }

    long long int sum_of_row[r] = {0};
    for (long long int i = 0; i < r; i++)
    {
        long long int count = 0;
        for (long long int j = 0; j < c; j++)
        {
            count += power[i][j];
        }
        sum_of_row[i] = count;
    }

    for (long long int i = 0; i < r; i++)
    {
        for (long long int j = 0; j < r; j++)
        {

            if (sum_of_row[i] != sum_of_row[j] && i != j)
            {
                long long int is_exist_zero_in_j_idx = 0;
                for (long long int k = 0; k < c; k++)
                {
                    if (power[j][k] == 0)
                    {
                        power[j][k] = sum_of_row[i] - sum_of_row[j];
                        is_exist_zero_in_j_idx = 1;
                        break;
                    }
                }

                if (is_exist_zero_in_j_idx)
                {
                    break;
                }
            }
        }
    }

    long long int sum_of_row_final[r] = {0};
    for (long long int i = 0; i < r; i++)
    {
        long long int count = 0;
        for (long long int j = 0; j < c; j++)
        {
            count += power[i][j];
        }
        sum_of_row_final[i] = count;
    }

    long long int is_equal = 1;
    for (long long int i = 0; i < r; i++)
    {
        if (sum_of_row_final[0] != sum_of_row_final[i])
        {
            is_equal = 0;
        }
    }

    if (is_equal)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}