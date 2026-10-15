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
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> ans(3);
    rep(i, n) {
        if (a[i] % 1000 == 0) continue;
        ll maisu = a[i] / 1000 + 1;
        ll oturi = 1000 * maisu - a[i];

        // cout << "i: " << i << endl;
        // cout << maisu << " " << oturi << endl;

        ans[2] += oturi / 100;
        oturi %= 100;
        // cout << oturi << endl;

        ans[1] += oturi / 10;
        oturi %= 10;
        // cout << oturi << endl;

        ans[0] += oturi;
        // cout << oturi << endl;

    }
    rep(i, 3) cout << ans[i] << " ";
    cout << endl;
    return 0;
}