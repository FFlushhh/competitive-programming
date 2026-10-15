#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    char c1, c2;
    string s;
    cin >> n >> c1 >> c2 >> s;
    rep (i, s.size()) {
        if (s[i] != c1) {
            s[i] = c2;
        }
    }
    cout << s << endl;
    return 0;
}