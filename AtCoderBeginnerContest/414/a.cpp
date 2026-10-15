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
    
    int n, l, r;
    cin >> n >> l >> r;
    int ans = 0;
    rep(i, n) {
        int x, y;
        cin >> x >> y;
        if (x <= l && y >= r) ++ans;
    }
    cout << ans << '\n';
    return 0;
}