#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<string> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        string s = a[0];  
        

        for (int i = 1; i < n; i++) {
            string option1 = a[i] + s;  
            string option2 = s + a[i];  
            
            if (option1 < option2) {
                s = option1;
            } else {
                s = option2;
            }
        }
        
        cout << s << endl;
    }
    
    return 0;
}