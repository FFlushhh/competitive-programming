#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m, l;
    cin >> n >> m >> l;
    vector<string> s(n);
    vector<pair<string, string>> p(l);
    rep(i, n) cin >> s[i];
    rep(i, l) cin >> p[i].first >> p[i].second;
    int ans = 0;
    vector<string> ans_str;
    rep (i, n) {
        int cnt = 0;
        int money = 0;
        vector<pair<string, string>> tmp = p;
        rep (j, l) {
            if (s[i] == tmp[j].first || s[i] == tmp[j].second) {
                cnt++;
                tmp[j].first = "";
                tmp[j].second = "";
            }
        }
        money = m + (m / 2) * cnt;
        if (ans < money) {
            ans = money;
            ans_str.clear();
            ans_str.emplace_back(s[i]);
        }
        else if (ans == money) {
            ans_str.emplace_back(s[i]);
        }
    }
    cout << ans << endl;
    for (auto str : ans_str) {
        cout << str << endl;
    }
    return 0;
}