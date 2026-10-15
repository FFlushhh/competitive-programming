#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll ans = 0;
    rep (i, 64) {
        int a;
        cin >> a;
        ll mal = 1;
        for (int j = 1; j <= i; ++j) mal *= 2;
        ans += a * mal;
    }
    cout << ans << endl;
    return 0;
}