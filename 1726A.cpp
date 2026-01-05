#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    int t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        
        int ans = 0;

        for (int i = 1; i < n; i++)
            ans = max(ans, a[i] - a[0]);

        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[n - 1] - a[i]);

        for (int i = 0; i < n - 1; i++)
            ans = max(ans, a[i] - a[i + 1]);

        cout << ans << endl;


    } 
 
    return 0; 
} 
