#include <bits/stdc++.h>
using namespace std;

bool Top(const vector<int> &rungs, int k)
{
    int currentK = k;
    int currentHeight = 0;

    for (int rung : rungs)
    {
        int jump = rung - currentHeight;
        if (jump > currentK)
        {
            return false;
        }
        if (jump == currentK)
        {
            currentK--;
        }
        currentHeight = rung;
    }

    return true;
}

int findMin(const vector<int> &rungs)
{
    int left = 1;
    int right = rungs.back() - 0;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (Top(rungs, mid))
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

    for (int caseNumber = 1; caseNumber <= T; ++caseNumber)
    {
        int n;
        cin >> n;

        vector<int> rungs(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> rungs[i];
        }

        int minK = findMin(rungs);
        cout << "Case " << caseNumber << ": " << minK << endl;
    }

    return 0;
}
