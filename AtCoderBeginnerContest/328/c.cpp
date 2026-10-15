#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    int cnt = 0;
    rep (i, n - 1) {
        if (s[i] == s[i + 1]) cnt++;
    }
    for (;--q;) {
        int l, r;
        cin >> l >> r;
        l--; r--;
    }
    return 0;
}

// 分からない
// 方針（自分の考え）
// 先に長さnの文字列の隣り合う箇所を数える
// その後、クエリを受け取り、該当箇所部分だけのカウントを出力する