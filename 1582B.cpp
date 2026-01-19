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
		vector<long long> a(n);
		for (long long i = 0; i < n; i++) 
			cin >> a[i];

		long long count_1 = 0; 
		long long count_0 = 0; 
		for (long long i = 0; i < n; i++) 
		{
			if (a[i] == 1)
				count_1++;
			else if (a[i] == 0)
				count_0++;
		}

		long long ways = pow(2, count_0) * count_1;
		cout << ways << endl;
    } 
 
    return 0; 
} 
