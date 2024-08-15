#include <bits/stdc++.h>
using namespace std;
int main()
{

    queue<string> q;
    int T;
    cin >> T;

    while (T--)
    {
        int x;
        cin >> x;

        if (x == 0)
        {
            string s;
            cin >> s;
            q.push(s);
        }
        else if (x == 1)
        {
            if (!q.empty())
            {
                cout << q.front() << endl;
                q.pop();
            }
            else
            {
                cout << "Invalid" << endl;
            }
        }
        else
        {
            cout << "Invalid" << endl;
        }
    }
    return 0;
}