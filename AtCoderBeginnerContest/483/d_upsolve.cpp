// 自力Upsolve

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> plus(n + 1), minus(n + 1);

    rrep(i, n) {
        plus[i] = max(plus[i + 1], plus[i + 1] + a[i]);
        minus[i] = min(minus[i + 1], minus[i + 1] + a[i]);
    }

    ll ans = 0;
    ll now = 0;
    
    rep(i, n) {
        now += a[i];
        ll res = now + plus[i + 1] - minus[i + 1] + 1;
        ll rres = now + plus[i + 1] - minus[i + 1] - 2 * a[i] + 1;
        ans = max(ans, res);
        ans = max(ans, rres);
    }

    cout << ans << endl;
    return 0;
}

/*
符号を反転させない場合の、プラス方向にどこまで進むか・マイナス方向にどこまで進むか、は分かっている
また、i番目の符号を反転させるとき、i=1...i-1までは、符号反転していないし、i+1...nも符号反転しない

今の座標を管理しながら、i=0...n-1を見る
i番目について見ているとき、
    今からプラス方向に最大どれだけ、マイナス方向に最大どれだけ進むかが分かっていたら良い
*/