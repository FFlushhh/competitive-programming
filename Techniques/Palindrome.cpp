#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 回文
// ABC307 B
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v(n);
    rep (i, n) cin >> v[i];
    rep (i, n) rep (j, n) {
        if (i == j) continue;
        string s = v[i] + v[j];
        for (int k = 0; k < s.size() / 2; ++k) {
            if (s[k] != s[s.size() - k - 1]) break;
            if (k == s.size() / 2 - 1) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    /*
    rep (i, n) rep (j, n) {
        if (i == j) continue;
        string s = v[i] + v[j];
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    */
    cout << "No" << endl;
    return 0;
}

/*
2通りの解き方
1. 文字列のサイズ/2までループを回して、左右から比較していく
2. 文字列を逆順にして、元の文字列と比較する
*/