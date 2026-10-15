#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s;
    cin >> s;
    map<char, int> count;
    for (char c : s) {
        count[c]++;
    }
    map <int, int> freq; // ある出現回数（p.second）が何個あるか
    for (auto p : count) {
        freq[p.second]++;
    }
    for (auto p : freq) {
        if (p.second != 2) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}
/*
for (char c : s) { // 文字列sの各文字cについて
    count[c]++; // cの出現回数を1増やす、初めて出現する場合は自動的にcount[c]を作成して0で初期化、その後1増やす
}
*/