#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, W;
        cin >> N >> W;
        int weight[N], value[N];
        for (int i = 0; i < N; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> value[i];
        }
        int dp[N + 1][W + 1];
        for (int i = 0; i <= N; i++)
        {
            for (int j = 0; j <= W; j++)
            {
                if (i == 0 || j == 0)
                    dp[i][j] = 0;
            }
        }
        for (int i = 1; i <= N; i++)
        {
            for (int j = 1; j <= W; j++)
            {
                if (weight[i - 1] <= j)
                {
                    int opt1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                    int opt2 = dp[i - 1][j];
                    dp[i][j] = max(opt1, opt2);
                }
                else
                {
                    int opt = dp[i - 1][j];
                    dp[i][j] = opt;
                }
            }
        }
        cout << dp[N][W] << endl;
    }

    return 0;
}