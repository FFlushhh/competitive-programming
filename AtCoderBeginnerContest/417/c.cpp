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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> b(n);
    rep(i, n) b[i] = a[i] - (i + 1);
    sort(b.begin(), b.end());
    ll ans = 0;
    rep(i, n) {
        auto it = lower_bound(b.begin(), b.end(), -(a[i] + (i + 1)));
        auto it2 = upper_bound(b.begin(), b.end(), -(a[i] + (i + 1)));
        ans += it2 - it;
    }   
    cout << ans << endl;
    return 0;
}