#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> a;

    if (n == 1)
        cout << 1 << endl;
    else if (n <= 3)
        cout << "NO SOLUTION" << endl;

    else{
        for (int i = 2 ; i <= n; i+=2)
            a.push_back(i);
        
        for (int i = 1; i <= n; i+=2)
            a.push_back(i);
        
        for (auto i: a)
            cout << i << " ";
    }
    return 0;

}