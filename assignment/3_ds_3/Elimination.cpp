#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;
    while (T--)
    {

        string s;
        cin >> s;
        stack<char> st;
        
        for (char ch : s)
        {
            if (ch == '1')
            {
                if (st.empty())
                {
                    st.push(ch);
                }
                else
                {
                    if (st.top() == '0')
                    {
                        st.pop();
                    }
                    else
                    {
                        st.push(ch);
                    }
                }
            }
            else
            {
                st.push(ch);
            }
        }
        if (st.empty())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
    return 0;
}