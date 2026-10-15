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
    unordered_map<int, int> mp;
    vector<pair<int, int> > v;
    rep (i, 3 * n) {
        int a;
        cin >> a;
        mp[a]++;
        if (mp[a] == 2) v.emplace_back(i + 1, a);
    }
    sort(v.begin(), v.end());
    for (auto p : v) cout << p.second << " ";
    cout << endl;
    return 0;
}