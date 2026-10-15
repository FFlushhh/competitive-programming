#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, p, q;
    cin >> n >> p >> q;
    vector<int> d(n);
    rep (i, n) cin >> d[i];
    int ans = p;
    rep (i, n) {
        ans = min(ans, q + d[i]);
    }
    cout << ans << endl;
    return 0;
}