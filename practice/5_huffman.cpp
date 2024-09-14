#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<double> points(n);

    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
    }

    sort(points.begin(), points.end());

    int intervals = 0;
    double last_interval_end = -1.0;

    vector<double> interval_starts;

    for (int i = 0; i < n; i++)
    {
        if (points[i] > last_interval_end)
        {
            intervals++;
            double start = points[i];
            interval_starts.push_back(start);
            last_interval_end = start + 1.0;
        }
    }

    cout << intervals << endl;
    for (double start : interval_starts)
    {
        cout << start << endl;
    }

    return 0;
}
