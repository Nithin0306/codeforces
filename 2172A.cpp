#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    fast_io;

    int g, c, l;
    cin >> g >> c >> l;

    vector<int> a;
    a.push_back(g);
    a.push_back(c);
    a.push_back(l);

    sort(a.begin(), a.end());

    if (a[2] - a[0] >= 10)
        cout << "check again\n";
    else
        cout << "final " << a[1] << endl;

    return 0;
}
