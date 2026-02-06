#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)  cin >> a[i];
        

        int total = 0;
        for (int i = 1; i < n; i++) {
            total += abs(a[i] - a[i - 1]);
        }

        int max_reduction = 0; 

        max_reduction = min(max_reduction, -abs(a[1] - a[0]));

        max_reduction = min(max_reduction, -abs(a[n - 1] - a[n - 2]));

        for (int i = 1; i < n - 1; i++) {
            int change = abs(a[i - 1] - a[i + 1]) - 
                               (abs(a[i - 1] - a[i]) + abs(a[i] - a[i + 1]));
            max_reduction = min(max_reduction, change);
        }

        int answer = total + max_reduction;
        cout << answer << "\n";
    }

    return 0;
}