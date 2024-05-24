#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, greater<int>());
    return a;
}

int main()
{
    int n;
    cin >> n;

    int *sort_ar = sort_it(n);
    for (int i = 0; i < n; i++)
    {
        cout << sort_ar[i];

        if (i < n - 1)
        {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
