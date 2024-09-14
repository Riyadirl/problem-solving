#include <bits/stdc++.h>
using namespace std;


bool isValid(const vector<int> &pages)
{
    int n = pages.size();
    unordered_map<int, int> count;

    for (int page : pages)
    {
        if (page >= n)
            return false;
        count[page]++;
    }

    //
    for (const auto &entry : count)
    {
        int num = entry.first;
        int frequency = entry.second;

        if (num > n - frequency)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; ++caseNumber)
    {
        int n;
        cin >> n;

        vector<int> pages(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> pages[i];
        }

        bool valid = isValid(pages);
        cout << "Case " << caseNumber << ": " << (valid ? "yes" : "no") << endl;
    }

    return 0;
}
