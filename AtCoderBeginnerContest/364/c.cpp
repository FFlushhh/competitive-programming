#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    ll x, y;
    cin >> n >> x >> y;
    vector<ll> a(n), b(n);
    rep (i, n) cin >> a[i];
    rep (i, n) cin >> b[i];
    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());
    ll Asum = 0, Bsum = 0;
    rep (i, n) {
        Asum += a[i];
        Bsum += b[i];
        if (Asum > x || Bsum > y) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << n << endl;
    return 0;
}