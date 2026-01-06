#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    int t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long n;
        cin >> n;

        if (n < 4 || n % 2 == 1)
            cout << -1 << endl;
        else{
            long long min_buses = (n + 5) / 6;
            long long max_buses = n / 4;
            cout << min_buses << " " << max_buses << endl;
        }
    } 
 
    return 0; 
} 
