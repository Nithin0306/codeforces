#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n,x;
        cin >> n >> x;
        vector<int> arr(n);
        for(auto &i:arr) cin >> i;

        int mx = arr[0];

        for(int i = 1; i < n; ++i){
            mx = max(mx, arr[i] - arr[i - 1]);
        }

        mx = max(mx, 2 * (x - arr[n - 1]));

        cout << mx << "\n";

    }
    
}