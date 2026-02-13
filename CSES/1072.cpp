#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int k = 1; k <= n; k++){
        
        long long sq = 1LL * k * k;

        long long totalPossible = (sq*(sq -1)) / 2;
        long long attackPos = 4 * (k - 1) * (k - 2);

        long long possible = totalPossible - attackPos;
        cout << possible << endl;

    }

    return 0;
}