#include <bits/stdc++.h> 
using namespace std; 

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 

int main() { 
    fast_io; 

    long long t; 
    cin >> t; 
    while (t--) { 
        
        int n, m, d;
        cin >> n >> m >> d;

        int height = d / m + 1;   
        height = min(height, n);  

        int towers = (n + height - 1) / height;  

        cout << towers << endl;
    } 

    return 0; 
}