#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int digits = to_string(n).size();
        int first_digit = to_string(n)[0] - '0';

        int result = 9 * (digits - 1) + first_digit;
        cout << result << '\n';
    }
    return 0;
}
