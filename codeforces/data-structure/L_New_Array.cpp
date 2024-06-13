#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> a(n), b(n), c;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    
    c.insert(c.end(), b.begin(), b.end());
    c.insert(c.end(), a.begin(), a.end());

    for (int i = 0; i < c.size(); i++)
    {
        if (i > 0)
            cout << " ";
        cout << c[i];
    }
    cout << endl;
    return 0;
}
