#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, t;
    cin >> s >> t;
    vector<string> ans;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] > t[i]) {
            s[i] = t[i];
            ans.emplace_back(s);
        }
    }
    for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] < t[i]) {
            s[i] = t[i];
            ans.emplace_back(s);
        }
    }
    cout << ans.size() << endl;
    for (auto &x : ans) cout << x << endl;
    return 0;
}