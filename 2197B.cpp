#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL)

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> p(n),a(n);

        for(int i = 0;i < n;i++)
            cin >> p[i];
        for(int i = 0;i < n;i++)
            cin >> a[i];

        bool ok = true;

        vector<int> pos(n + 1);
        for (int i = 0; i < n; i++) {
            pos[p[i]] = i;
        }


        int last = pos[a[0]];

        for (int i = 1; i < n; i++) {
            if (a[i] != a[i - 1]) {
                if (pos[a[i]] <= last) {
                    ok = false;
                    break;
                }
                last = pos[a[i]];
            }
        }


        if(ok){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}