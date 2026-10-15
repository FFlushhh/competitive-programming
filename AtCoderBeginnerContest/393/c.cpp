#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, m;
    cin >> n >> m;
    set<pair<int, int>> s;
    ll ans = 0;
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        if (s.contains({a, b}) || a == b) {
            ++ans;
        }
        else s.insert({a, b});
    }
    cout << ans << endl;
    return 0;
}