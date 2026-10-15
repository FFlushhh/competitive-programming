#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    string s;
    cin >> n >> m >> s;
    vector<int> c(n);
    rep (i, n) cin >> c[i];
    vector<vector<int>> ps(m); // ps[i]: グループiに属する文字のインデックスを格納するリスト
    rep (i, n) ps[c[i] - 1].emplace_back(i);
    string ans = s; // sをコピーし、すべて書き換える
    rep (i, m) {
        int l = ps[i].size();
        rep (j, l) ans[ps[i][(j + 1) % l]] = s[ps[i][j]]; // 1右巡回シフト、% lで最後の要素の次が最初になるようにする
    }
    cout << ans << endl;
    return 0;
}