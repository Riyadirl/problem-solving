#include <bits/stdc++.h>
using namespace std;

vector<long long> factorials;

void precompute_factorials()
{
    long long fact = 1;
    factorials.push_back(1);
    for (int i = 1; i <= 20; i++)
    {
        fact *= i;
        factorials.push_back(fact);
    }
}

void solve_case(int case_num, long long n)
{
    vector<int> result;

    for (int i = 20; i >= 0; i--)
    {
        if (n >= factorials[i])
        {
            n -= factorials[i];
            result.push_back(i);
        }
    }

    if (n == 0)
    {
        cout << "Case " << case_num << ": ";
        for (int i = result.size() - 1; i >= 0; i--)
        {
            cout << result[i] << "!";
            if (i > 0)
                cout << "+";
        }
        cout << endl;
    }
    else
    {

        cout << "Case " << case_num << ": impossible" << endl;
    }
}

int main()
{
    precompute_factorials();

    int T;
    cin >> T;

    for (int i = 1; i <= T; i++)
    {
        long long n;
        cin >> n;
        solve_case(i, n);
    }

    return 0;
}
