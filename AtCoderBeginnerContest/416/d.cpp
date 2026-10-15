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
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(n);
        rep(i, n) cin >> a[i];
        rep(i, n) cin >> b[i];
        sort(a.rbegin(), a.rend());
        sort(b.begin(), b.end());
        // a + b >= m となるbの最小値とマッチング
        ll ans = 0;
        rep(i, n) ans += a[i] + b[i];
        int idx = 0;
        rep(i, n) {
            int need = m - a[i];
            int nidx = lower_bound(b.begin() + idx, b.end(), need) - b.begin();
            if (nidx < n) {
                ans -= m;
                idx = nidx + 1;
            } else {
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

/*
a + b (a + b < m)
a + b - m (a + b >= m) できるだけこれを多くしたい
ans = sum(a + b) - m * k (kはa + b >= mとなるペアの数)
kを最大化する
*/