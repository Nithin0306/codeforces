#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, k;
        cin >> n >> k;

        vector<pair<long long, long long>> monsters(n);

        for (long long i = 0; i < n; i++) {
            long long x;
            cin >> x;

            long long r = x % k;
            if (r == 0) r = k;
                monsters[i] = {r, i + 1};
        }

        sort(monsters.begin(), monsters.end(), [&](auto &a, auto &b) {
            if (a.first != b.first)
                return a.first > b.first;
            return a.second < b.second;
        });

        for (auto &m : monsters)
            cout << m.second << " ";
        cout << "\n";
    }

    return 0;
}
