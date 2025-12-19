#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        int l, a, b;
        cin >> l >> a >> b;

        int maxPrize = 0;
        int current = a;
        
        for (int i = 0; i < l; i++) {
            if (current > maxPrize) {
                maxPrize = current;
            }
            current = (current + b) % l;
            
            if (current == a) {
                break;
            }
        }
        
        cout << maxPrize << endl;

    }
    return 0;
}