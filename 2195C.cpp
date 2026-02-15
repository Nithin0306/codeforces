#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

bool adjacent(int x, int y) {
    return x != y && x != 7 - y;
}

int main() {
    fast_io;

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        const int INF = 1e9;

        vector<vector<int>> dp(n + 1, vector<int>(7, INF));

        
        for (int x = 1; x <= 6; x++)
            dp[1][x] = (a[1] == x ? 0 : 1);

        // DP
        for (int i = 2; i <= n; i++) {
            for (int x = 1; x <= 6; x++) {

                int cost = (a[i] == x ? 0 : 1);

                for (int y = 1; y <= 6; y++) {
                    if (adjacent(x, y)) {
                        dp[i][x] = min(dp[i][x],
                                       dp[i - 1][y] + cost);
                    }
                }
            }
        }

        int ans = INF;
        for (int x = 1; x <= 6; x++)
            ans = min(ans, dp[n][x]);

        cout << ans << "\n";
    }

    return 0;
}
