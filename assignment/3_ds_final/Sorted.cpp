#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int> s;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (int x : s)
        {
            pq.push(x);
        }

        while (!pq.empty())
        {
            cout << pq.top() << " ";
            pq.pop();
        }
        cout << endl;
    }
    return 0;
}