#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    char s;
    int id, math_marks, eng_marks;
};

bool comp(student s1, student s2)
{
    if (s1.eng_marks > s2.eng_marks)
    {
        return true;
    }
    else if (s1.eng_marks == s2.eng_marks)
    {
        if (s1.math_marks > s2.math_marks)
        {
            return true;
        }
        else if (s1.math_marks == s2.math_marks)
        {
            return s1.id < s2.id;
        }
    }
    return false;
}

int main()
{

    int n;
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].s >> s[i].id >> s[i].math_marks >> s[i].eng_marks;
    }

    sort(s, s + n, comp);

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].s << " " << s[i].id << " " << s[i].math_marks << " " << s[i].eng_marks << endl;
    }

    return 0;
}