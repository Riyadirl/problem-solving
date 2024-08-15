#include <bits/stdc++.h>
using namespace std;

string valid(string s)
{
    stack<char> st;
    for (char ch : s)
    {
        if (!st.empty() && ch != st.top())
        {
            st.pop();
        }
        else
        {
            st.push(ch);
        }
    }

    if (st.empty())
    {
        return "YES";
    }
    else
    {
        return "NO";
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        string s;
        cin >> s;

        cout << valid(s) << endl;
    }
    return 0;
}