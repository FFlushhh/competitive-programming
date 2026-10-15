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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int m;
    cin >> m;
    set<int> b;
    rep(i, m) {
        int v;
        cin >> v;
        b.insert(v);
    }
    int x;
    cin >> x;
    vector<bool> dp(x + 1, false);
    dp[0] = true;
    rep(i, x) {
        if (b.count(i)) continue;
        if (!dp[i]) continue;
        for (int v : a) {
            if (i + v <= x) dp[i + v] = true;
        }
    }
    cout << (dp[x] ? "Yes" : "No") << "\n";
    return 0;
}