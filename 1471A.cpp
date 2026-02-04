#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    int t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long n , x;
        cin >> n >> x;

        long long minn = 0, maxx = 0; 
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        
        for (int i = 0; i < n; i++){
			maxx += ceil(a[i] * 1.0 / x);
			minn += a[i];
		}

		minn = ceil(minn * 1.0 / x);
		cout << minn << " " << maxx << endl;
    } 
 
    return 0; 
} 
