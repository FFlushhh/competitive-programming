#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s, t;
    int j = 0;
    cin >> s >> t;
    rep (i, t.size()) {
        if (t[i] == s[j]) {
            cout << i + 1 << " ";
            ++j;
        }
    }
    return 0;
}