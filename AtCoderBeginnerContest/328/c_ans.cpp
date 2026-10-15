#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

/*
方針
累積和
...適切な前処理をしておくことで、配列上の区間の総和を求めるクエリを爆速で処理できるようになる手法
配列の前からの合計を取った配列を作る
*/
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> sum(n + 1, 0);
    rep (i, n - 1) {
        if (s[i] == s[i + 1]) sum[i + 1] = sum[i] + 1;
        else sum[i + 1] = sum[i];
    }
    rep (i, q) {
        int l, r;
        cin >> l >> r;
        l--; r--;
        cout << sum[r] - sum[l] << endl; // 累積和の部分文字列部分を出力
    }
    return 0;
}