#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long  t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long n , p;
        cin >> n >> p;

        vector<long long> a(n), b(n);
        vector<pair<long long, long long>> v(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        for (int i = 0; i < n; i++)
			v[i] = {b[i], a[i]};
        
        sort(v.begin(), v.end());

        long long minimum_cost = p;
        long long already_shared = 1; 

        for (auto it : v){
            long long can_be_shared = it.second;
            long long sharing_cost = it.first; 

            if (sharing_cost >= p)
				break;
            
            if (already_shared + can_be_shared > n)
			{
				minimum_cost += (n - already_shared) * sharing_cost;
				already_shared = n; 
				break;
			}
            else
			{
				minimum_cost += can_be_shared * sharing_cost; 
				already_shared += can_be_shared; 
			}
		}
        
        minimum_cost += (n - already_shared) * p;
		cout << minimum_cost << endl; 
    } 
 
    return 0; 
} 
