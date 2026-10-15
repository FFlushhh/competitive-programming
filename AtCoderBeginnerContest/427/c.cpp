#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
int n, m;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m;
    vector<int> u(m), v(m);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        u[i] = a;
        v[i] = b;
    }
    ll ans = LLONG_MAX;
    for (int i = 0; i < (1 << n); ++i) {
        vector<ll> color(n);
        rep(j, n) {
            if (i >> j & 1) color[j] = 1;
        }
        ll cnt = 0;
        rep(i, m) {
            if (color[u[i]] == color[v[i]]) ++cnt;
        }
        ans = min(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}