#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    int t; 
    cin >> t; 
    while (t--) { 
        // solve here
        string s;
        cin >> s;
        
        int count_0 = 0, count_1 = 0;

        for (int i = 0; i < s.size(); i++){
            if (s[i] == '0')
                count_0++;
               
            else
                count_1++;
        }

        int opr = min(count_0, count_1);
        if (opr % 2 == 1)
            cout << "DA" << endl;
        else
            cout << "NET" << endl;
    } 
 
    return 0; 
} 
