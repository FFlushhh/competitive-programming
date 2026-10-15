#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    int height = 0;
    int current = 0;
    vector<int> h(n);
    rep (i, n) cin >> h[i];
    rep (i, n) {
        if (height != h[i]) {
            current = 0;
            height = h[i];
        }
        ++current;
        ans = max(ans, current);
    }
    cout << ans << endl;
    return 0;
}