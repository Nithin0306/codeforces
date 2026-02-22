#include <bits/stdc++.h>
using namespace std;

void generatePermutations(vector<int> &freq, string &current, vector<string> &result, int n) {
    if (current.size() == n) {
        result.push_back(current);
        return;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            current.push_back('a' + i);
            freq[i]--;

            generatePermutations(freq, current, result, n);

            freq[i]++;          
            current.pop_back(); 
        }
    }
}

int main() {
    string s;
    cin >> s;

    sort(s.begin(), s.end());

    vector<int> freq(26, 0);
    for (char c : s)
        freq[c - 'a']++;

    vector<string> result;
    string current = "";

    generatePermutations(freq, current, result, s.size());

    cout << result.size() << endl;
    for (auto &str : result)
        cout << str << endl;

    return 0;
}