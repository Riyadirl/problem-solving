#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word;
    getline(cin, s);

    stringstream ss(s);

    int find = 0;

    while (ss >> word)
    {
        if (word == "Jessica")
        {
            find = 1;
            break;
        }
    }

    if (find)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}