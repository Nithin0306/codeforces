#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    int t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long n;
        cin >> n;

        long long count3 = 0;
        long long count2 = 0;

        while (n > 0 && n % 3 == 0)
        {
            count3++;
            n /= 3;
        }

        while (n > 0 && n % 2 == 0)
        {
            count2++;
            n /= 2;
        }

        if (n > 1 || count2 > count3)
			cout << -1 << endl; 
		else
			cout << count3 + (count3 - count2) << endl;
        
    } 
 
    return 0; 
} 
