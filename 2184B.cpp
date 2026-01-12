#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;
        
        long long flips = m / k;  
        long long t_since_last = m % k;
        
        long long remaining_at_last_flip;
        
        if (s < k) {
            remaining_at_last_flip = s;
        } else if (s == k) {
            remaining_at_last_flip = s;
        } else {
            if (flips % 2 == 0) {
                remaining_at_last_flip = s;  
            } else {
                remaining_at_last_flip = k;  
            }
        }
        
        long long answer = max(0LL, remaining_at_last_flip - t_since_last);
        cout << answer << "\n";
    }

    return 0;
}