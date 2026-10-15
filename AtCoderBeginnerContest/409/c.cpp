#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, l;
    cin >> n >> l;
    if (l % 3 != 0) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> dot(l);
    int idx = 0;
    dot[idx]++;
    rep (i, n - 1) {
        int x;
        cin >> x;
        idx += x;
        idx %= l;
        dot[idx]++;
    }
    ll ans = 0;
    int interval = l / 3;
    for (int i = 0; i < l / 3; ++i) {
        ans += ll(dot[i]) * dot[(i + interval) % l] * dot[(i + 2 * interval) % l];
    }
    cout << ans << endl;
    return 0;
}