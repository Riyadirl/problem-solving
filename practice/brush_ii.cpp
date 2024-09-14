#include <bits/stdc++.h>
using namespace std;

int minMoves(vector<int>& y_coords, int w) {
    sort(y_coords.begin(), y_coords.end()); 
    int moves = 0; 
    int i = 0;
    int n = y_coords.size();
    
    while (i < n) {
        moves++;
        int start = y_coords[i]; 
        while (i < n && y_coords[i] <= start + w) {
            i++;  
        }
    }
    
    return moves;
}

int main() {
    int T;
    cin >> T;  
    for (int t = 1; t <= T; t++) {
        int N, w;
        cin >> N >> w;
        vector<int> y_coords(N);

        
        for (int i = 0; i < N; i++) {
            int x, y;
            cin >> x >> y;
            y_coords[i] = y;
        }

     
        int result = minMoves(y_coords, w);
        cout << "Case " << t << ": " << result << endl;
    }
    
    return 0;
}
