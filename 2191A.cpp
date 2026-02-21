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

        vector<int> a(n);
        vector<int> pos(n + 1);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            pos[a[i]] = i;   
        }
        
        bool ok = true;
        
        for(int i = 1; i < n; i++) {
            if(abs(pos[i] - pos[i+1]) % 2 == 0) {
                ok = false;
                break;
            }
        }
        
        cout << (ok ? "YES" : "NO") << endl;
        
    } 
 
    return 0; 
} 
