#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        int a , b , c;
        cin >> a >> b >> c;

        int only1 = (b % 2 == c % 2);
        int only2 = (a % 2 == c % 2);
        int only3 = (a % 2 == b % 2);

        cout << only1 << " " << only2 << " " << only3 << "\n";

    } 
 
    return 0; 
} 
