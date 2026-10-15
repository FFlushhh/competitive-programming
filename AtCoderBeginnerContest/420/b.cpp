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
    
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    rep(i, n) cin >> s[i];
    vector<int> cnt(n);
    rep(j, m) {
        vector<int> zeroidx, oneidx;
        rep(i, n) {
            if (s[i][j] == '0') zeroidx.emplace_back(i);
            else oneidx.emplace_back(i);
        }
        if (zeroidx.size() == 0 || oneidx.size() == 0) {
            rep(i, n) cnt[i]++;
        } else if (zeroidx.size() < oneidx.size()) {
            for (int i : zeroidx) cnt[i]++;
        } else {
            for (int i : oneidx) cnt[i]++;
        }
    }
    int mx = *max_element(cnt.begin(), cnt.end());
    rep(i, n) {
        if (cnt[i] == mx) cout << i + 1 << " ";
    }
    cout << "\n";
    return 0;
}