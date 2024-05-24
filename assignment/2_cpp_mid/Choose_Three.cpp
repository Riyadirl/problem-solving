
#include <bits/stdc++.h>
using namespace std;

string threeValue(int a[], int n, int s)
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
                return "YES";
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
    return "NO";
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
        cout << threeValue(a, n, s) << endl;
    }

    return 0;
}
