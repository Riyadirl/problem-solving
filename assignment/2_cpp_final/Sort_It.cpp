#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    int id, math_marks, eng_marks;
    char s;
};

bool comp(student s1, student s2)
{
    int total_s1 = s1.math_marks + s1.eng_marks;
    int total_s2 = s2.math_marks + s2.eng_marks;

    if (total_s1 > total_s2)
    {
        return true;
    }
    else if (total_s1 == total_s2)
    {
        return s1.id < s2.id;
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