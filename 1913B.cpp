#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        string s;
        cin >> s;

        int n = s.size();
        long long count_0 = 0, count_1 = 0;

        for (int i = 0; i < n; i++){
            if (s[i] == '0')
                count_0++;
            else
                count_1++;
        }

        int len_t = 0;

        for (int i = 0; i < n; i++){
            if (s[i] == '0' && count_1 > 0){
                count_1--;
                len_t++;
            }
            else if (s[i] == '1' && count_0 > 0){
                count_0--;
                len_t++;
            }
            else
                break;
        }
        cout << n - len_t << endl;

    } 
 
    return 0; 
} 
