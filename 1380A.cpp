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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        bool found = false;

        for (int j = 1; j < n - 1 && !found; j++) {
            int i = -1, k = -1;

            for (int x = 0; x < j; x++) {
                if (a[x] < a[j]) {
                    i = x;
                    break;
                }
            }

            for (int x = j + 1; x < n; x++) {
                if (a[x] < a[j]) {
                    k = x;
                    break;
                }
            }

            if (i != -1 && k != -1) {
                cout << "YES\n";
                cout << i + 1 << " " << j + 1 << " " << k + 1 << "\n";
                found = true;
            }
        }

        if (!found) cout << "NO\n";
    }
}
