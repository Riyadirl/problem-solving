#include <bits/stdc++.h>
using namespace std;

char a[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && (a[ci][cj] == '.' || a[ci][cj] == 'B'))
        {
            dfs(ci, cj);
        }
    }
}

int main()
{
    cin >> n >> m;

    pair<int, int> start, dst;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];

            if (a[i][j] == 'A')
            {
                start = {i, j};
            }
            if (a[i][j] == 'B')
            {
                dst = {i, j};
            }
        }
    }

    memset(vis, false, sizeof(vis));

    dfs(start.first, start.second);

    if (vis[dst.first][dst.second])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}