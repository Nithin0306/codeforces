#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        if (n % 4 == 0) {
            cout << 0 << "\n";
        }
        else if (n % 4 == 1) {
            cout << 1 << "\n";
        }
        else if (n % 4 == 2) {
            if (n == 2) cout << 2 << "\n";
            else cout << 0 << "\n";
        }
        else { 
            if (n == 3) cout << 3 << "\n";
            else cout << 1 << "\n";
        }
    }
    return 0;
}