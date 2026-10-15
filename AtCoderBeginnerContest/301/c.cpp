#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    int sc = 0, tc = 0;
    int alpha[26] = {0};
    rep (i, s.size()) {
        if (s[i] == '@') sc++;
        if (t[i] == '@') tc++;
        alpha[s[i] - 'a']++;
        alpha[t[i] - 'a']--;
    }
    string str = "atcoder";
    rep (i, 26) {
        bool ok = true;
        if (alpha[i] > 0) {
            rep (j, str.size()) {
                if (str[j] - 'a' == i) {
                    tc -= alpha[i]; // alpha[i] > 0
                    if (tc < 0) ok = false;
                }
            }
        }
        else if (alpha[i] < 0) {
            rep (j, str.size()) {
                if (str[j] - 'a' == i) {
                    sc -= -alpha[i]; // alpha[i] < 0
                    if (sc < 0) ok = false;
                }
            }
        }
        if (!ok) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << (sc >= 0 && tc >= 0 && sc == tc ? "Yes" : "No") << endl;
    return 0;
}