#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        set<int> colors;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            colors.insert(x);
        }
        
        int distinct = colors.size();
        int previous = -1;
        

        while (true) {
            if (distinct == previous) {
                break; 
            }
            
            previous = distinct;
            
            if (colors.count(distinct)) {
                break; 
            }
            
            colors.insert(distinct);
            distinct = colors.size();
        }
        
        cout << distinct << endl;
    }
    
    return 0;
}