#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k, string &s) {
    int sleep_count = 0;
    int awake_until = -1;
    
    for (int i = 0; i < n; ++i) {
        if (s[i] == '1') {
            if (i + k > awake_until) {
                awake_until = i + k;
            }
        } else 
        { 
            if (i > awake_until) {
                sleep_count++;
            }
        }
    }
    cout << sleep_count << "\n";
}

int main(){
    int t;
    cin >> t;

    while (t--){
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        solve(n,k,s);
    }
}