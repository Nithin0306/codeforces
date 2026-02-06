#include <bits/stdc++.h> 
using namespace std; 
 
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr); 
 
int main() { 
    fast_io; 
 
    long long  n;
    cin >> n;
    cout << n << " ";

    while (n != 1){
        if (n % 2 == 0){
            n /= 2;
            cout << n << " ";
        }
        else{
            n = (n * 3) + 1;
            cout << n << " ";
        }
        
    }
 
    return 0; 
} 
