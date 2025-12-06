#include <bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<int,int> freq;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            freq[a[i]]++;
        } 

        if (freq.size() == 1) cout << "Yes\n";
        else if (freq.size() == 2){
            vector<int> counts;

            for (auto &p : freq) counts.push_back(p.second);
            
            if (abs(counts[0] - counts[1]) <= 1) cout << "Yes\n";
            else cout << "No\n";

        }
        else cout << "No\n";

    }

    return 0;
}