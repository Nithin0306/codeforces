#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool has2025 = false;
        bool has2026 = false;

        for (int i = 0; i + 3 < n; i++) {
            string sub = s.substr(i, 4);
            if (sub == "2025") has2025 = true;
            if (sub == "2026") has2026 = true;
        }

       
        if (has2026 || !has2025) {
            cout << 0 << endl;
        }
      
        else {
            cout << 1 << endl;
        }
    }
    return 0;
}
