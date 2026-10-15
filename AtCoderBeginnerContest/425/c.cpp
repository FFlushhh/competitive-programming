#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> sum(n + 1);
    rep(i, n) sum[i + 1] = sum[i] + a[i];
    int prefix = 0;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int c;
            cin >> c;
            prefix += c;
            prefix %= n;
        } else {
            int l, r;
            cin >> l >> r;
            l--; r--;
            int nl = (l + prefix) % n;
            int nr = (r + prefix) % n;
            if (nl <= nr) {
                cout << sum[nr + 1] - sum[nl] << '\n';
            } else {
                cout << sum[n] - sum[nl] + sum[nr + 1] - sum[0] << '\n';
            }
        }
    }
    return 0;
}