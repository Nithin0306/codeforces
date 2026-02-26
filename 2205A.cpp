#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n);

        for (int i = 0; i < n; i++)
            cin >> p[i];

        int pos = 0;

        for (int i = 0; i < n; i++) {
            if (p[i] == n) {
                pos = i;
                break;
            }
        }

        if (pos != 0) {
            swap(p[0], p[pos]);
        }

        for (int i = 0; i < n; i++)
            cout << p[i] << " ";

        cout << "\n";
    }

    return 0;
}