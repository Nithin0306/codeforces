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
		int n = s.size(); 

		if (s[0] != s[n - 1])
		{
			if (s[0] == 'a')
				s[0] = 'b';
			else
				s[0] = 'a';
		}

		cout << s << endl;
    } 
 
    return 0; 
} 
