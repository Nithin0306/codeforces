#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long trailingZeros = 0;

    while (n > 0) {
        n /= 5;
        trailingZeros += n;
    }

    cout << trailingZeros << endl;

    return 0;
}
