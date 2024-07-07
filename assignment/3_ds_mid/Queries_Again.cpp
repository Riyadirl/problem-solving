#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> linked_list;
    int q;
    cin >> q;

    while (q--)
    {
        int x, v;
        cin >> x >> v;

        if (x < 0 || x > linked_list.size())
        {
            cout << "Invalid" << endl;
        }
        else
        {
            auto it = linked_list.begin();
            advance(it, x);
            linked_list.insert(it, v);

            cout << "L -> ";
            for (int val : linked_list)
            {
                cout << val << " ";
            }
            cout << endl;

            cout << "R -> ";
            for (auto rit = linked_list.rbegin(); rit != linked_list.rend(); rit++)
            {
                cout << *rit << " ";
            }
            cout << endl;
        }
    }

    return 0;
}