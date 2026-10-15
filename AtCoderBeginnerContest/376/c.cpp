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
    vector<ll> a(n), b(n - 1);
    rep (i, n) cin >> a[i];
    rep (i, n - 1) cin >> b[i];
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    int j = 0;
    bool ok = true;
    int ans = -1;
    rep (i, n) {
        if (a[i] > b[j]) {
            if (ok) {
                ans = a[i];
                ok = false;
                continue;
            }
            else {
                cout << -1 << endl;
                return 0;
            }
        }
        ++j;
    }
    cout << ans << endl;
    return 0;
}