#include <bits/stdc++.h>
using namespace std;

int cakeMaker(long long white, long long dark, bool startWhite){
    int layerSize = 1;
    int layers = 0;
    bool useWhite = startWhite;

    while (true)
    {
        if (useWhite){
            if (white < layerSize) break;
            white -= layerSize;
        }
        else{
            if (dark < layerSize) break;
            dark -= layerSize;
        }
        layers++;
        layerSize *= 2;
        useWhite = !useWhite;
    }
    return layers;
}

int main(){
    int t;
    cin >> t;

    while (t--){
        int a, b;
        cin >> a >> b;

        int whiteStart = cakeMaker(a, b, true);
        int darkStart = cakeMaker(a, b, false);

        cout << max(whiteStart, darkStart) << endl;
    }
    return 0;
}