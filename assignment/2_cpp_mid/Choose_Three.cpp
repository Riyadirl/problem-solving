#include <bits/stdc++.h>
using namespace std;

int three(int a[], int n, int s)
{
    sort(a, a + n);
    for (int i = 0; i < n - 2; ++i)
    {
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = a[i] + a[left] + a[right];
            if (sum == s)
            {
                return 1;
            }
            else if (sum < s)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;
        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        int result = three(a, n, s);
        
        if (result == 1)
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
