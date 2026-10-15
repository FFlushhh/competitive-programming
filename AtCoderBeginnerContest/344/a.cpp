#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s;
    bool judge = false;
    cin >> s;
    rep (i, s.size()) {
        if (s[i] == '|') {
            if (!judge) {
                judge = true;
                continue;
            } else {
                judge = false;
                continue;
            }
        } else if (!judge) {
            cout << s[i];
        }
    }
}