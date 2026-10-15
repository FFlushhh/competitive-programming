#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, string>> s(n);
    rep (i, n) {
        string t;
        cin >> t;
        s[i] = make_pair((int)t.size(), t);
    }
    sort(s.begin(), s.end());
    rep (i, n) cout << s[i].second;
    return 0;
}