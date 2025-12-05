#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(int n, vector<int> &a, vector<int> &b) {
    ll min_score = 0, max_score = 0;
    
    for (int i = 0; i < n; i++) {
        ll new_min = min(min_score - a[i], b[i] - max_score);
        ll new_max = max(max_score - a[i], b[i] - min_score);
        min_score = new_min;
        max_score = new_max;
    }
    
    cout << max_score << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        solve(n, a, b);
    }
    
    return 0;
}