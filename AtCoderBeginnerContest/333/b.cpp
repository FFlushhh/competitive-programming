#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    string p = "ABCDEA";
    int sd = 2;
    int td = 2;
    if (s[0] > s[1]) {
        swap(s[0], s[1]);
    }
    if (t[0] > t[1]) {
        swap(t[0], t[1]);
    }
    rep (i, 5) {
        if (s == p.substr(i, 2)) {
            sd = 1;
        }
        if (t == p.substr(i, 2)) {
            td = 1;
        }
    }
    if (s == "AE") {
        sd = 1;
    }
    if (t == "AE") {
        td = 1;
    }
    cout << (sd == td ? "Yes" : "No") << endl;
    return 0;
}