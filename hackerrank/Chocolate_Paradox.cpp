#include <iostream>
using namespace std;

int main()
{
    int x, y, t;
    cin >> x >> y >> t;

    if ((t % y) <= x)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
