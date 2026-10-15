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
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    ll ans = 0;
    set<string> st;
    rep(i, n) {
        rep(j, n) {
            if (i == j) continue;
            string t = s[i] + s[j];
            if (!st.count(t)) {
                ++ans;
                st.insert(t);
            }
        }
    }
    cout << ans << endl;
    return 0;
}