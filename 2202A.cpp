#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long x, y;
        cin >> x >> y;

        if (x - 2*y >= 0 && (x - 2*y) % 3 == 0 && x >= -4*y)
            cout << "YES\n";
        else 
            cout << "NO\n";
    } 
 
    return 0; 
} 
