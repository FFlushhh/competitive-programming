#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    ll sum = 0;
    rep (i, n) {
        sum += a[i];
    }
    ll ans = 0;
    rep (i, n - 1) {
        sum -= a[i];
        ans += a[i] * sum;
    }
    cout << ans << endl;
    return 0;
}