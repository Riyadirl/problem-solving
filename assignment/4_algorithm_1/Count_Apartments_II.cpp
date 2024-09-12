#include <bits/stdc++.h>
using namespace std;

char mat[1005][1005];
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

int dfs(int si, int sj, int &cnt)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj) && !vis[ci][cj] && mat[ci][cj] == '.')
        {
            cnt++;
            dfs(ci, cj, cnt);
        }
    }
    return cnt;
}

int main()
{
    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }

    memset(vis, false, sizeof(vis));

    vector<int> room;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == '.' && !vis[i][j])
            {
                int cnt = 1;
                int result = dfs(i, j, cnt);
                room.push_back(result);
            }
        }
    }

    sort(room.begin(), room.end());

    if (room.empty())
    {
        cout << "0" << endl;
    }
    else
    {
        for (int size : room)
        {
            cout << size << " ";
        }
        cout << endl;
    }

    return 0;
}