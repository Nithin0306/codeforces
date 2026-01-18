#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long n;
        cin >> n;

        while (n % 2 == 0)
			n /= 2;

		if (n > 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;

    } 
 
    return 0; 
} 
