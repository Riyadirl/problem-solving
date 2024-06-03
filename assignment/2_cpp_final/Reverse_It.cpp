#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    int cls;
    int id;
    char s;
};

int main()
{
    int n;
    cin >> n;
    student s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i].name >> s[i].cls >> s[i].s >> s[i].id;
    }

    int i = 0, j = n - 1;
    while (i < j)
    {
        swap(s[i++].s, s[j--].s);
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i].name << " " << s[i].cls << " " << s[i].s << " " << s[i].id << endl;
    }
    return 0;
}