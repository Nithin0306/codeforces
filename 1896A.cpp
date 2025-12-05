#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n);

        for (auto &i : a) cin >> i;

        if (a[0] == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
    
}