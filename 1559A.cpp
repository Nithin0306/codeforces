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
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        int total_and = a[0];
        for (int i = 0; i < n; i++)
            total_and &= a[i];
        
        cout << total_and << endl;
    } 
 
    return 0; 
} 
