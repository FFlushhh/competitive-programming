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
    
    ll n, s, lim;
    cin >> n >> s >> lim;
    s--;

    vector<ll> a(n);
    rep(i, n - 1) cin >> a[i];

    ll i = s;
    ll ans = 0;

    // 下がってから上がる
    for (ll step = 0; step < n; ++step) {
        ll cnt = 0;
        ll d = 0;
        while (i > 0 && i <= n - 1) {
            if (i <= 0 || i > n - 1 || d + a[i - 1] >= lim) break;
            d += a[i - 1];
            // cnt++;
            if (step <= cnt) {
                i++;
            } else {
                i--;
            }
            cnt++;
        }
        ans = max(ans, cnt);
        cout << ans << endl;
    }

    // 上がってから下がる
    i = s;
    for (ll step = 0; step < n; ++step) {
        ll cnt = 0;
        ll d = 0;
        while (i > 0 && i <= n - 1) {
            if (step <= cnt) {
                i--;
            } else {
                i++;
            }
            if (i <= 0 || i > n - 1 || d + a[i - 1] >= lim) break;
            d += a[i - 1];
            cnt++;
        }
        cout << ans << endl;

        ans = max(ans, cnt);
    }

    
    cout << ans << endl;
    return 0;
}

/*
違う点
    - 移動回数と訪れた異なる街の数は一致しない
        cnt++;
        ans = max(ans, cnt);

    - 距離の加算に問題あり
        d += a[i - 1]
        i → i - 1 のときは、a[i - 1]だが、
        i ← i - 1 のときは、a[i]
*/