#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string t;
    cin >> n >> t;
    vector<int> ans;
    rep (i, n) {
        string s;
        cin >> s;
        bool ok = false;
        if (s == t) ok = true;
        else if (s.size() == t.size()) {
            rep (j, s.size()) {
                if (s[j] != t[j]) {
                    s[j] = t[j];
                    if (s == t) ok = true;
                    break;
                }
            }
        }
        else if (s.size() + 1 == t.size()) {
            if (s + t.back() == t) ok = true;
            else {
                rep (j, s.size()) {
                    if (s[j] != t[j]) {
                        s.insert(j, 1, t[j]);
                        if (s == t) ok = true;
                        break;
                    }
                }
            }
        }
        else if (s.size() - 1 == t.size()) {
            if (s == t + s.back()) ok = true;
            else {
                rep (j, s.size()) {
                    if (s[j] != t[j]) {
                        s.erase(j, 1);
                        if (s == t) ok = true;
                        break;
                    }
                }
            }
        }
        if (ok) ans.push_back(i + 1);
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for (int x : ans) cout << x << " ";
    return 0;
}