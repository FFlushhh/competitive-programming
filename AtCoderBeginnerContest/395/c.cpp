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
    unordered_map<int, vector<int>> mp;
    rep (i, n) {
        int a;
        cin >> a;
        mp[a].push_back(i);
    }
    int ans = 1e9;
    rep (i, mp.size()) {
        if (!mp[i].size() >= 2) continue;
        int tmp = 1e9;
        rep (j, mp[i].size() - 1) {
            ans = min(ans, mp[i][j + 1] - mp[i][j] + 1);
        }
    }
    cout << (ans == 1e9 ? -1 : ans) << endl;
    return 0;
}