#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    long long S = (n * (n + 1)) / 2;

    if (S % 2 != 0)
        cout << "NO" << endl;
    else{
        cout << "YES" << endl;
        long long target = S / 2;

        vector<long long> set1;
        vector<long long> set2;

        for (long long curr = n; curr >= 1; curr--) {
            if (curr <= target) {
                set1.push_back(curr);
                target -= curr;
            } else {
                set2.push_back(curr);
            }
        }

        cout << set1.size() << endl;
        for (int i: set1)
            cout << i << " ";
        cout << "\n";

        cout << set2.size() << endl;
        
        for (int j: set2)
            cout << j << " ";
    }


    return 0;
}