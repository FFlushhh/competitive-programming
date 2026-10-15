#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s, t;
    cin >> n >> s >> t;
    int ans = 0;
    rep (i, n) {
        if (s[i] != t[i]) ++ans;
    }
    cout << ans << endl;
    return 0;
}