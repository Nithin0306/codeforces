#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while (t--){
        string s;
        cin >> s;
        
        int yCount = 0;
        for(char c : s) {
            if(c == 'Y') yCount++;
        }
        
        if(yCount <= 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}