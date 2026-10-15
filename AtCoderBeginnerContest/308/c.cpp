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
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];
    vector<pair<long double, int>> ans(n);
    rep (i, n) {
        long double top = a[i];
        long double bottom = a[i] + b[i];
        ans[i] = make_pair(top / bottom, -(i + 1));
    }
    sort(ans.rbegin(), ans.rend());
    rep (i, n) cout << -ans[i].second << endl;
    return 0;
}

/*
・doubleだとWA -> long doubleを使うことで、小数点以下の桁数が多い場合に正確な比較ができる
・stable_sortを使うと、同じ値の場合に元の順番が保持される
・符号を反転しておくことで、sortを使っても元の順番が保持される
*/