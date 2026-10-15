#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    string s;
    cin >> s;
    rep (i, s.size()) {
        if (i == 0) {
            if (s[i] != '<') {
                cout << "No" << endl;
                return 0;
            }
        } else if (i == s.size() - 1) {
            if (s[i] != '>') {
                cout << "No" << endl;
                return 0;
            }
        } else {
            if (s[i] != '=') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}