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
    map<int, vector<int>> mp;
    rep (i, n) {
        int a;
        cin >> a;
        mp[a].push_back(i);
    }
    vector<int> w(n);
    rep (i, n) cin >> w[i];
    int ans = 0;
    rep (i, mp.size()) {
        vector<int> v(mp[i].size());
        rep (j, mp[i].size()) v[j] = w[mp[i][j]];
        sort(v.begin(), v.end());
        rep (j, v.size() - 1) ans += v[j];
    }
    cout << ans << endl;
    return 0;
}

/*
解答の方針
各箱に入っている荷物の重さの最大値を管理し、それらの総和をN個の荷物の重さの総和から引く
*/