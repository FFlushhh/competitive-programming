// ABC302 C
// next_permutation（順列の全列挙）

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep (i, n) cin >> s[i];

    sort(s.begin(), s.end()); // sortが必要

    // 1行目を基準にして、2行目以降の文字列を順列で全列挙する
    // do-while
    do {
        rep (i, n - 1) {
            int cnt = 0;
            rep (j, m) {
                if (s[i][j] != s[i + 1][j]) cnt++;
            }
            if (cnt >= 2) break;
            if (i == n - 2) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    while (next_permutation(s.begin(), s.end()));
    cout << "No" << endl;
    return 0;
}