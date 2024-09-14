#include <bits/stdc++.h>
using namespace std;

bool canPartition(const vector<int> &distances, int K, int maxDistance)
{
    int currentSum = 0;
    int partitions = 1;

    for (int distance : distances)
    {
        if (currentSum + distance > maxDistance)
        {
            partitions++;
            currentSum = distance;
            if (partitions > K + 1)
            {
                return false;
            }
        }
        else
        {
            currentSum += distance;
        }
    }

    return true;
}

int findMinMaxDistance(const vector<int> &distances, int K)
{
    int left = *max_element(distances.begin(), distances.end());
    int right = accumulate(distances.begin(), distances.end(), 0);

    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (canPartition(distances, K, mid))
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

void printPlan(const vector<int> &distances, int K, int maxDistance)
{
    vector<int> days;
    int currentSum = 0;

    for (int distance : distances)
    {
        if (currentSum + distance > maxDistance)
        {
            days.push_back(currentSum);
            currentSum = distance;
        }
        else
        {
            currentSum += distance;
        }
    }

    days.push_back(currentSum);

    while (days.size() < K + 1)
    {
        days.push_back(0);
    }

    for (int day : days)
    {
        cout << day << endl;
    }
}

int main()
{
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; ++caseNumber)
    {
        int N, K;
        cin >> N >> K;

        vector<int> distances(N + 1);
        for (int i = 0; i < N + 1; ++i)
        {
            cin >> distances[i];
        }

        int minMaxDistance = findMinMaxDistance(distances, K);

        cout << "Case " << caseNumber << ": " << minMaxDistance << endl;
        printPlan(distances, K, minMaxDistance);
    }

    return 0;
}
