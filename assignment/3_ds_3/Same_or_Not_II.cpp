#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> st2;
    list<int> list1;
    list<int> list2;

    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        int X;
        cin >> X;
        st.push(X);
    }

    while (!st.empty())
    {
        list1.push_back(st.top());
        st.pop();
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }

    while (!st2.empty())
    {
        list2.push_back(st2.front());
        st2.pop();
    }

    bool check = equal(list1.begin(), list1.end(), list2.begin(), list2.end());
    if (check)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}