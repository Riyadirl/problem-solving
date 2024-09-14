#include <bits/stdc++.h>
using namespace std;

bool canFill(const vector<int> &vessels, int m, int maxCapacity)
{
    int currentSum = 0;
    int neededContainers = 1;

    for (int capacity : vessels)
    {
        if (currentSum + capacity > maxCapacity)
        {
            neededContainers++;
            currentSum = capacity;
            if (neededContainers > m)
            {
                return false;
            }
        }
        else
        {
            currentSum += capacity;
        }
    }
    return true;
}

int Capacity(int n, int m, const vector<int> &vessels)
{
    int left = *max_element(vessels.begin(), vessels.end());
    int right = accumulate(vessels.begin(), vessels.end(), 0);

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (canFill(vessels, m, mid))
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }

    return left;
}

int main()
{
    int T;
    cin >> T;
    for (int i = 1; i <= T; ++i)
    {
        int n, m;
        cin >> n >> m;
        vector<int> vessels(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> vessels[i];
        }

        int result = Capacity(n, m, vessels);
        cout << "Case " << i << ": " << result << endl;
    }
    return 0;
}
