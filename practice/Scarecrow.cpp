#include <bits/stdc++.h>
using namespace std;

int minScarecrows(const string &field)
{
    int n = field.length();
    vector<bool> covered(n, false);
    int scarecrowCount = 0;

    for (int i = 0; i < n; ++i)
    {
        if (field[i] == '.' && !covered[i])
        {

            scarecrowCount++;
            if (i + 1 < n)
                covered[i + 1] = true;
            if (i + 2 < n)
                covered[i + 2] = true;
            covered[i] = true;
        }
    }
    return scarecrowCount;
}

int main()
{
    int T;
    cin >> T;
    for (int caseNumber = 1; caseNumber <= T; ++caseNumber)
    {
        int N;
        cin >> N;
        string field;
        cin >> field;

        int result = minScarecrows(field);
        cout << "Case " << caseNumber << ": " << result << endl;
    }
    return 0;
}
