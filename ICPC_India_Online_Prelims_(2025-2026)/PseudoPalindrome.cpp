#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    if (n == 1) { 
        cout << "YES\n";
        return;
    }

    sort(a.begin(), a.end());

    int pairs = 0;
    for (int i = 0; i + 1 < n; ) {
        if (a[i+1] - a[i] <= d) {
            pairs++;
            i += 2; 
        } else {
            i += 1; 
        }
    }

    if (pairs >= n / 2) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
