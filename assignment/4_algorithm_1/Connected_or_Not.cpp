#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> v[N];

bool connected(int src, int des)
{
    if (src == des)
    {
        return true;
    }
    for (int child : v[src])
    {
        if (child == des)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
    }

    int x;
    cin >> x;

    while (x--)
    {
        int src, des;
        cin >> src >> des;

        if (connected(src, des))
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