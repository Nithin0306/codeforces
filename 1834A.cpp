#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int neg = 0, pos = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1) neg++;
            else pos++;
        }

        int ops = 0;

        while (pos < neg || neg % 2 == 1)
        {
            ops++;
            neg--;
            pos++;
        }

        cout << ops << endl;
    }
    return 0;
}
