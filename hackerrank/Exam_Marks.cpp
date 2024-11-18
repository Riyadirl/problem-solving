#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M;
        cin >> N >> M;
        M = 1000 - M;
        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        bool dp[N + 1][M + 1];
        dp[0][0] = true;
        for (int i = 1; i <= M; i++)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= N; i++)
        {
            for (int j = 0; j <= M; j++)
            {
                if (A[i - 1] <= j)
                {
                    bool opt1 = dp[i - 1][j - A[i - 1]];
                    bool opt2 = dp[i - 1][j];
                    dp[i][j] = opt1 || opt2;
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        if (dp[N][M])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}