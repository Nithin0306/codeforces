#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> p(n);
        for(int i = 0; i < n; i++)
            cin >> p[i];

        vector<int> suffixMaxPos(n);
        suffixMaxPos[n-1] = n-1;

        for(int i = n-2; i >= 0; i--){
            if(p[i] > p[suffixMaxPos[i+1]])
                suffixMaxPos[i] = i;
            else
                suffixMaxPos[i] = suffixMaxPos[i+1];
        }

        for(int i = 0; i < n; i++){
            int j = suffixMaxPos[i];
            if(p[j] > p[i]){
                reverse(p.begin() + i, p.begin() + j + 1);
                break;
            }
        }

        for(int x : p)
            cout << x << " ";
        cout << "\n";
    }
}
