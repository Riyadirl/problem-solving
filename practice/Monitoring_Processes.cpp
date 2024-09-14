#include <bits/stdc++.h>
using namespace std;

int findMin(const vector<pair<int, int>> &intervals)
{

    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (const auto &interval : intervals)
    {
        int start = interval.first;
        int end = interval.second;

        while (!minHeap.empty() && minHeap.top() < start)
        {
            minHeap.pop();
        }

        minHeap.push(end);
    }

    return minHeap.size();
}

int main()
{
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; ++caseNumber)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> intervals(n);
        for (int i = 0; i < n; ++i)
        {
            int si, ti;
            cin >> si >> ti;
            intervals[i] = {si, ti};
        }
        sort(intervals.begin(), intervals.end());

        int minPrograms = findMin(intervals);
        cout << "Case " << caseNumber << ": " << minPrograms << endl;
    }

    return 0;
}
