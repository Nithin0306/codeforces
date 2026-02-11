#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    int t; 
    cin >> t; 
    while (t--) { 
        // solve here 
        long long x;
        cin >> x;

        int count = 0;
        for (long long i = x; i <= x + 100; i++){
            long long temp = i;
            long long sum = 0;
            while (temp > 0) {
                sum += temp % 10;
                temp /= 10;
            }
            if (i - sum == x)
                count++;
        }
        cout << count << endl;
    } 
 
    return 0; 
} 
