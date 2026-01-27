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
        string s;
        cin >> s;

        int longest_substring_length = 1;
		int current_substring_length = 1;

        for (int i = 1; i < n; i++){
            if (s[i]==s[i-1])
                current_substring_length++;
            else{
                longest_substring_length = max(longest_substring_length,current_substring_length);
                current_substring_length = 1;

            }
        }

        	longest_substring_length = max(longest_substring_length, current_substring_length);
            cout << longest_substring_length + 1 << endl;
    } 
 
    return 0; 
} 
