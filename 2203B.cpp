#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {
        string x;
        cin >> x;

        int n = x.size();
        int sum = 0;

        for (char c : x)
            sum += (c - '0');

        if (sum <= 9) {
            cout << 0 << "\n";
            continue;
        }

        int need = sum - 9;

        vector<int> reductions;

        for (int i = 0; i < n; i++) {
            int d = x[i] - '0';

            if (i == 0) {
                reductions.push_back(d - 1);
            } else {
                reductions.push_back(d);
            }
        }

        sort(reductions.begin(), reductions.end(), greater<int>());

        int moves = 0;

        for (int r : reductions) {
            if (need <= 0)
                break;

            need -= r;
            moves++;
        }

        cout << moves << "\n";
    }

    return 0;
}