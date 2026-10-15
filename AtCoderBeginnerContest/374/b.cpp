#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s, t;
    int size = 0;
    cin >> s >> t;
    if (s == t) {
        cout << 0 << endl;
        return 0;
    }
    size = max(s.size(), t.size());
    rep (i, size) {
        if (s[i] != t[i]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}