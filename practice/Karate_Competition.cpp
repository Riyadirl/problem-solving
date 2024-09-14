#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int points(const vector<int> &yourSkills, const vector<int> &oppSkills)
{
    vector<int> sortedYourSkills = yourSkills;
    vector<int> sortedOppSkills = oppSkills;

    sort(sortedYourSkills.begin(), sortedYourSkills.end());
    sort(sortedOppSkills.begin(), sortedOppSkills.end());

    int points = 0;
    int i = 0;
    int j = 0;

    while (i < sortedYourSkills.size() && j < sortedOppSkills.size())
    {
        if (sortedYourSkills[i] > sortedOppSkills[j])
        {

            points += 2;
            j++; //
        }
        i++;
    }

    return points;
}

int main()
{
    int T;
    cin >> T;

    for (int caseNumber = 1; caseNumber <= T; ++caseNumber)
    {
        int N;
        cin >> N;

        vector<int> yourSkills(N);
        vector<int> opponentSkills(N);

        for (int i = 0; i < N; ++i)
        {
            cin >> yourSkills[i];
        }
        for (int i = 0; i < N; ++i)
        {
            cin >> opponentSkills[i];
        }

        int maxPoints = points(yourSkills, opponentSkills);
        cout << "Case " << caseNumber << ": " << maxPoints << endl;
    }

    return 0;
}
