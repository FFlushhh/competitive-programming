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
    
    int n, m;
    cin >> n >> m;
    vector<string> s(n), t(m);
    rep(i, n) cin >> s[i];
    rep(i, m) cin >> t[i];
    int ans = 0;
    rep(i, n) {
        string tmp = s[i].substr(s[i].size() - 3);
        rep(j, m) {
            if (tmp == t[j]) {
                ans++;
                break;
            }
        }
    }
    cout << ans << '\n';
    return 0;
}