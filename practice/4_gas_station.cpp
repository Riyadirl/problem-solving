#include <bits/stdc++.h>
using namespace std;

void minStops(int D, int m, vector<int>& stations) {
    int currentPos = 0, stops = 0;
    int i = 0, n = stations.size();

    while (currentPos + m < D) {
        int lastStation = currentPos;
        while (i < n && stations[i] <= currentPos + m) {
            lastStation = stations[i];
            i++;
        }

        if (currentPos == lastStation) {
            cout << "Cannot reach the destination." << endl;
            return;
        }

        currentPos = lastStation;
        stops++;
        cout << "Stop at station at: " << currentPos << " miles." << endl;
    }

    cout << "Total stops: " << stops << endl;
}

int main() {
    int D, m, n;
    cin >> D >> m >> n;
    vector<int> stations(n);

    for (int i = 0; i < n; i++) {
        cin >> stations[i];
    }

    minStops(D, m, stations);
    return 0;
}
