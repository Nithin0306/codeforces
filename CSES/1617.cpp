#include <bits/stdc++.h>
using namespace std;

const long long MOD = 1e9 + 7;

long long power(long long a, long long b) {
    long long result = 1;
    a %= MOD;

    while (b > 0) {
        if (b % 2 == 1)
            result = (result * a) % MOD;

        a = (a * a) % MOD;
        b /= 2;
    }

    return result;
}

int main() {
    long long n;
    cin >> n;

    cout << power(2, n) << endl;
    return 0;
}
