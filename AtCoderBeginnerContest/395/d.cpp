#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, q;
    cin >> n >> q;
    vector<int> p(n + 1);
    unordered_map<int, vector<int>> mp(n + 1);
    rep (i, n) mp[i + 1].push_back(i + 1);
    for (int i = 1; i <= n; ++i) p[i] = i;
    while (q--) {
        int sgn;
        cin >> sgn;
        if (sgn == 1) {
            int a, b;
            cin >> a >> b;
            p[a] = b;
            mp[b].push_back(a);
            mp[a].erase(remove(mp[a].begin(), mp[a].end(), a), mp[a].end());
        }
        else if (sgn == 2) {
            int a, b;
            cin >> a >> b;
            for (int x : mp[a]) p[x] = b;
            for (int x : mp[b]) p[x] = a;
            swap(mp[a], mp[b]);
        }
        else {
            int a;
            cin >> a;
            cout << p[a] << endl;
        }
    }
    return 0;
}