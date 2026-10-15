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
    
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l[i];
    vector<bool> ok(n + 1, false);
    ok[0] = true;
    ok[n] = true;
    rep(i, n) {
        if (l[i] == 0) ok[i + 1] = true;
        else break;
    }
    reverse(l.begin(), l.end());
    reverse(ok.begin(), ok.end());
    rep(i, n) {
        if (l[i] == 0) ok[i + 1] = true;
        else break;
    }
    int ans = 0;
    rep(i, n + 1) if (!ok[i]) ++ans;
    cout << ans << '\n';
    return 0;
}