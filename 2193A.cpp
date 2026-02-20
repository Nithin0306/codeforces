#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        int n, s, x;
        cin >> n >> s >> x;   

        int sum = 0;
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            sum += val;
        }

        if (sum <= s && (s - sum) % x == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}