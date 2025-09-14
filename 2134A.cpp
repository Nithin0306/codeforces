#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        bool ok = false;

        
        if ((n - b) % 2 == 0) {
            long long side = (n - b) / 2; 

            if (a <= b) {
                ok = true;
            } else {
             
                long long diff = a - b;
                if (diff % 2 == 0) {
                    long long extend = diff / 2; 
                    if (extend >= 1 && extend <= side) ok = true;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
