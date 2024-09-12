#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;
vector<int> v[N];

int main()
{
    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;

        if (v[x].empty())
        {
            cout << "-1" << endl;
        }
        else
        {
            sort(v[x].begin(), v[x].end(), greater<int>());

            for (int node : v[x])
            {
                cout << node << " ";
            }
            cout << endl;
        }
    }

    return 0;
}