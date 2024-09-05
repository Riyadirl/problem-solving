#include <bits/stdc++.h>
using namespace std;

pair<string, int> mxCount(string S)
{
    map<string, int> mp;
    istringstream ss(S);
    string word;
    int cnt = 0;
    string maxString;
    while (ss >> word)
    {
        mp[word]++;
        if (mp[word] > cnt)
        {
            cnt = mp[word];
            maxString = word;
        }
    }

    return make_pair(maxString, cnt);
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string S;
        getline(cin, S);
        auto maxCount = mxCount(S);
        cout << maxCount.first << " " << maxCount.second << endl;
    }
    return 0;
}