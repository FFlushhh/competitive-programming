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

    sort(all(a));

    ll r = lower_bound(all(a), 0) - a.begin();
    ll l = 0;
    if (r > 0) l = r - 1;

    ll ans = 0;
    ll prev = 0;

    if (abs(a[l]) == abs(a[r])) {
        prev = a[l];
        ans += abs(a[l]);
        l--;
    } else if (abs(a[l]) < abs(a[r])) {
        prev = a[l];
        ans += abs(a[l]);
        l--;
    } else {
        prev = a[r];
        ans += abs(a[r]);
        r++;
    }


    while (l >= 0 || r < n) {
        // cout << "操作前 : l: " << l << " " << "r: " << r << " " << "ans: " << ans << endl;
        if (l < 0) {
            ll dr = abs(a[r] - prev);
            ans += dr;
            prev = a[r];
            r++;
        } else if (r > n - 1) {
            ll dl = abs(a[l] - prev);
            ans += dl;
            prev = a[l];
            l--;
        } else {
            ll dl = abs(a[l] - prev);
            ll dr = abs(a[r] - prev);

            if (dl == dr) {
                ans += dl;
                prev = a[l];
                l--;
            } else if (dl < dr) {
                ans += dl;
                prev = a[l];
                l--;
            } else {
                ans += dr;
                prev = a[r];
                r++;
            }
        }

        // cout << "操作後 : l: " << l << " " << "r: " << r << " " << "ans: " << ans << endl;
    }

    cout << ans << endl;

    return 0;
}

/*
0からの差を見る
*/