#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int n = s.size();
    int maxLen = 1;
    int len = 1;

    for (int i = 0; i < n - 1; i++){
        if (s[i] == s[i+1]){
            len++;
            maxLen = max(maxLen,len);
        }
        else
            len = 1;
    }

    cout << maxLen << endl;


    return 0;
}