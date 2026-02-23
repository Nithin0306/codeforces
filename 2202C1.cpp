#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        stack<pair<int,bool>> st; 
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            while (!st.empty() && !st.top().second && st.top().first >= a[i]) {
                st.pop();
            }
            
            if (!st.empty() && st.top().first == a[i] - 1) {
                st.push({a[i], false}); 
            } else {
                count++;
                st.push({a[i], true}); 
            }
        }
        
        cout << count << "\n";
    }
    return 0;
}