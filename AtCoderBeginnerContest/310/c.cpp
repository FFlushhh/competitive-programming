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
    cin >> n;
    vector<string> s(n);
    rep (i, n) cin >> s[i];
    set<string> st;
    int ans = 0;
    rep (i, n) {
        string rs = s[i];
        reverse(rs.begin(), rs.end());
        if (!st.count(s[i]) && !st.count(rs)) {
            ++ans;
            st.insert(s[i]);
            st.insert(rs);
        }
    }
    cout << ans << '\n';
    return 0;
}