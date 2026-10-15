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
    vector<ll> k(n);
    rep (i, n) cin >> k[i];
    sort(k.begin(), k.end(), greater<ll>());
    ll a = 0, b = 0;
    rep (i, n) {
        if (i == 0) {
            a = k[i];
            continue;
        }
        if (a + k[i] >= b + k[i]) {
            b += k[i];
        } else {
            a += k[i];
        }
    }
    cout << max(a, b) << endl;
    return 0;
}