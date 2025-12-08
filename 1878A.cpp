#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]]++;
        }

        if (freq.count(k) == 0) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}
