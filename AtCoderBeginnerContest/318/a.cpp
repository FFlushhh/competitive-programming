#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, p;
    cin >> n >> m >> p;
    int ans = 0;
    rep (i, n) {
        if (i + 1 == m) {
            ++ans;
            m += p;
        }
    }
    cout << ans << endl;
    return 0;
}