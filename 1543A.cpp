#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long  t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long a, b;
        cin >> a >> b;

        if (b > a)
			swap(a, b);

        if (a == b)
            cout << 0 << " " << 0 << endl;

        else{
            long long gcd = a - b;
            long long moves = min(b % gcd, gcd - b % gcd);
            cout << gcd << " " << moves << endl;
        }
        
        
    } 
 
    return 0; 
} 
