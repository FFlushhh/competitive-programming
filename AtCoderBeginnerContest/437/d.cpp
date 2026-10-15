#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
using mint = atcoder::modint998244353;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    rep(i, n) {
        ll A;
        cin >> A;
        a[i] = A;
    }
    ll bsum = 0;
    rep(i, m) {
        ll B;
        cin >> B;
        b[i] = B;
        bsum += B;
    }
    vector<ll> sumb(m + 1, 0);
    sort(all(b));
    rep(i, m) sumb[i + 1] = sumb[i] + b[i];
    mint ans = 0;
    rep(i, n) {
        int idx = upper_bound(all(b), a[i]) - b.begin();
        ans += abs(a[i] * idx - sumb[idx] + (bsum - sumb[idx]) - a[i] * (m - idx));
        // cout << a[i] * idx - sumb[idx] + (bsum - sumb[idx]) - a[i] * (m - idx) << endl;
    }
    cout << ans.val() << endl;
    return 0;
}