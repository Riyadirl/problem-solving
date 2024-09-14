#include <bits/stdc++.h>
using namespace std;

int minimumSwaps(vector<int> &arr, int n)
{
    vector<bool> visited(n, false);
    int swaps = 0;

    for (int i = 0; i < n; i++)
    {
        if (visited[i] || arr[i] == i + 1)
            continue;

        int cycle_length = 0;
        int x = i;

        while (!visited[x])
        {
            visited[x] = true;
            x = arr[x] - 1;
            cycle_length++;
        }

        if (cycle_length > 1)
        {
            swaps += (cycle_length - 1);
        }
    }

    return swaps;
}

int main()
{
    int T;
    cin >> T;

    for (int t = 1; t <= T; t++)
    {
        int n;
        cin >> n;
        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int result = minimumSwaps(arr, n);
        cout << "Case " << t << ": " << result << endl;
    }

    return 0;
}
