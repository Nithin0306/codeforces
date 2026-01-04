#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    int t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long n, m;
        cin >> n >> m;

        long long right = m * (m + 1) / 2;
        long long down = m * (n * (n + 1) / 2 - 1);

        cout << right + down << endl;

    } 
 
    return 0; 
} 
