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
    
    ll n, w;
    cin >> n >> w;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    ll ans = 0;
    for (int i = 0; i < (1 << n); ++i) {

        ll nowa = 0;
        ll nowb = 0;
        for (int j = 0; j < n; ++j) {
            if (i >> j & 1) {
                nowa += a[j];
                nowb += b[j];
            }
        }

        if (nowb <= w) {
            ans = max(ans, nowa);
        }

    }

    cout << ans << endl;
    return 0;
}