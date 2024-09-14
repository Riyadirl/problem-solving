#include <iostream>
using namespace std;

void minCoins(int coins[], int n, int N) {
    int count = 0;
    cout << "Coins used: " << endl;
    for (int i = 0; i < n; i++) {
        while (N >= coins[i]) {
            N -= coins[i];
            count++;
            cout << coins[i] << " ";
        }
    }
    cout << "\nTotal coins used: " << count << endl;
}

int main() {
    int N;
    cout << "Enter amount: ";
    cin >> N;

    int coins[] = {25, 10, 5, 1}; 
    int n = sizeof(coins) / sizeof(coins[0]);

    minCoins(coins, n, N);
    return 0;
}
