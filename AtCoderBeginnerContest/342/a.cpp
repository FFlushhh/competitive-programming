#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s;
    cin >> s;
    rep (i, s.size()) {
        if (i == 0) {
            continue;
        }
        if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            cout << i + 1 << endl;
            return 0;
        } else if (s[i] != s[i - 1] && s[i] == s[i + 1]) {
            cout << i << endl;
            return 0;
        }
    }
}