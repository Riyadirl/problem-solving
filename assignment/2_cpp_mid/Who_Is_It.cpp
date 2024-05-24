#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
    int id;
    string name;
    char sec;
    int marks;

};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Student students[3];
        for (int i = 0; i < 3; ++i)
        {
            cin >> students[i].id >> students[i].name >> students[i].sec >> students[i].marks;
        }

        int mxMark = -1, maxIndex = -1;
        for (int i = 0; i < 3; ++i)
        {
            if (students[i].marks > mxMark || (students[i].id < students[maxIndex].id && students[i].marks == mxMark))
            {
                mxMark = students[i].marks;
                maxIndex = i;
            }
        }

        cout << students[maxIndex].id << " " << students[maxIndex].name << " " << students[maxIndex].sec << " " << students[maxIndex].marks << endl;
    }

    return 0;
}