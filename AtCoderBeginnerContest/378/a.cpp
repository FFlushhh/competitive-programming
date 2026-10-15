#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    unordered_map<int, int> m;
    rep (i, 4) {
        int x;
        cin >> x;
        m[x]++;
    }
    int ans = 0;
    rep (i, m.size()) {
        ans += m[i] / 2;
    }
    cout << ans << endl;
    return 0;
}