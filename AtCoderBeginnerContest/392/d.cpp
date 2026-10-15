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
    vector<int> k(n);
    vector<vector<int>> a(n);
    rep (i, n) {
        cin >> k[i];
        a[i].resize(k[i]);
        rep (j, k[i]) cin >> a[i][j];
    }
    long double ans = 0;
    vector<double> p(n);
    rep (i, n) {
        map<int, int> mp;
        rep (j, k[i]) {
            mp[a[i][j]]++;
        }
        int cnt = 0;
        for (auto x : mp) {
            if (x.second > 1) cnt += x.second - 1;
        }
        p[i] = (1.0 / k[i]) * (a[i].size() + cnt);
    }
    rep (i, n) {
        long double sum = 0;

        rep (j, n) {
            if (i == j) continue;
            
        }
    }
    return 0;
}