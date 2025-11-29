#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        vector<int> a(4);
        for(auto &s: a) cin >> s;

        sort(a.begin(), a.end());
        
        if(a[0] == a[1] && a[1] == a[2] && a[2] == a[3])
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
