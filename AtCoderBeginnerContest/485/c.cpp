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

    ll n;
    cin >> n;

    vector<ll> c(n);
    rep(i, n) cin >> c[i];

    ll prev = -1;
    ll cnt = 0;
    vector<ll> ans(n, 1e9);

    rep(i, n) {
        if (i == 0) {
            prev = c[i];
            cnt++;
            continue;
        } 

        if (c[i] == prev) {
            cnt++;
            if (i - cnt >= 0) ans[i] = min(ans[i], cnt);
        } else {
            cnt = 1;
            ans[i] = min(ans[i], cnt);
        }

        prev = c[i];
    }

    reverse(all(c));
    reverse(all(ans));
    prev = -1;
    cnt = 0;

    rep(i, n) {
        if (i == 0) {
            prev = c[i];
            cnt++;
            continue;
        } 

        if (c[i] == prev) {
            cnt++;
            if (i - cnt >= 0) ans[i] = min(ans[i], cnt);
        } else {
            cnt = 1;
            ans[i] = min(ans[i], cnt);
        }

        prev = c[i];
    }
    
    reverse(all(ans));

    rep(i, n) cout << ans[i] << " ";
    cout << endl;

    return 0;
}

/*
i=1...nと、i=n...1の2回行う
初期は、1e9
直前の数字も持っておく
各数の最後に出た位置を記録
*/