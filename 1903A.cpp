#include <bits/stdc++.h>
using namespace std;


bool isSorted(vector<int> &a){
    for(int i = 1; i < a.size(); ++i){
        if (a[i] < a[i-1]) return false;
    }
    return true;
}


int main(){
    int t;
    cin >> t;

    while (t--){

        int n,r;
        cin >> n >> r;
        vector<int> a(n);
        for (auto &x: a) cin >> x;

         if (r == 1) {
            cout << (isSorted(a) ? "YES\n" : "NO\n");
        } else {
            cout << "YES\n";
        }
 
    }


    return 0;
}