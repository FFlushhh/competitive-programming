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
    
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    vector<pair<ll, ll> > st(n - 1);
    rep(i, n - 1) {
        cin >> st[i].first >> st[i].second;
        st[i].first--;
    }
    sort(st.begin(), st.end());
    ll ans = a[0];
    rep(i, n - 1) {
        ll div = a[i] / st[i].first;
        a[i] -= div;
        a[i + 1] += div * st[i].second;
        ans = max(ans, a[i + 1]);
    }
    cout << ans << '\n';
    return 0;
}