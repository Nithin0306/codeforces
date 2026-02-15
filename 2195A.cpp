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

        bool found = false;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == 67)
                found = true;
        }

        if (found)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
