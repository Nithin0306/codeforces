#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int score = 0;
        vector<string> grid(10);

        for (int i = 0; i < 10; i++) cin >> grid[i];

        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                if (grid[i][j] == 'X'){
                    int ring = 1 + min({i, j, 9 - i, 9 - j});
                    score += ring;
                }
            }
        }
        cout << score << "\n";
        
    }
    return 0; 
}