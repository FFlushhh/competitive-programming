#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans = 0;
    ll sum = accumulate(a.begin(), a.end(), 0LL); // 合計値
    int avg1 = sum / n, avg2 = (sum + n - 1) / n; // 平均値の切り上げと切り下げ
    ll low = 0, high = 0;
    for (int x : a) {
        if (x < avg1) low += avg1 - x; // 平均値より小さい場合
        else if (x > avg2) high += x - avg2; // 平均値より大きい場合
    }
    cout << max(low, high) << endl; // どちらか大きい方を出力、どちらの操作が多くなるかはデータ次第
    return 0;
}

/*
部分問題

別解
最終系の配列Bを求める
　総和をnで割った商と余りで分かる
Σ|a[i] - B[i]|を求める
上記の式を2で割る
...試行で減らした分と増やした分の総和は同じ

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    ll sum = accumulate(a.begin(), a.end(), 0LL); // 合計値
    ll x = sum / n, r = sum % n; // 平均値と余り
    vector<int> b(n, x); // 平均値で初期化
    rep (i, r) b[i]++; // 余り分を足す
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    ll ans = 0;
    rep (i, n) ans += abs(a[i] - b[i]); // 差分の総和
    cout << ans / 2 << endl; // 2で割る
    return 0;
}
*/