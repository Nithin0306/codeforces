#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long  n;
    cin >> n;
    
    vector<long long> a(n - 1);
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];
    
    long long sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += a[i];
    
    long long nSum = n * (n + 1) / 2;
    cout << nSum - sum << endl;
    
 
    return 0; 
} 
