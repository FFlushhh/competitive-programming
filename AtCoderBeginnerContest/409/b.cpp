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
    sort(a.begin(), a.end());
    int ans = 0;
    rep (i, n + 1) {
        auto it = lower_bound(a.begin(), a.end(), i);
        if (n - (it - a.begin()) >= i) ans = max(ans, i);
    }
    cout << ans << endl;
    return 0;
}