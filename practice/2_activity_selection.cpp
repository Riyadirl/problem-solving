#include <bits/stdc++.h>
using namespace std;

struct Activity
{
    int start, finish;
};

bool cmp(Activity a1, Activity a2)
{
    return a1.finish < a2.finish;
}

void activitySelection(vector<Activity> &activities)
{
    sort(activities.begin(), activities.end(), cmp);

    int n = activities.size();
    int lastFinish = activities[0].finish;
    cout << "Selected activities: " << endl;
    cout << "Activity 1 (Start: " << activities[0].start << ", Finish: " << activities[0].finish << ")" << endl;

    for (int i = 1; i < n; i++)
    {
        if (activities[i].start >= lastFinish)
        {
            cout << "Activity " << i + 1 << " (Start: " << activities[i].start << ", Finish: " << activities[i].finish << ")" << endl;
            lastFinish = activities[i].finish;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    vector<Activity> activities(n);

    for (int i = 0; i < n; i++)
    {
        cin >> activities[i].start >> activities[i].finish;
    }

    activitySelection(activities);
    return 0;
}
