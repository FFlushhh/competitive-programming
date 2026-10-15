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
    
    int n;
    cin >> n;
    vector<int> a(n + 1);
    rep1(i, n) cin >> a[i];
    map<int, int> idx;
    rep1(i, n) {
        idx[a[i]] = i;
    }
    vector<pair<int, int> > ans;
    rep1(i, n) {
        if (idx[i] != i) {
            int j = idx[i];
            ans.emplace_back(i, j);
            swap(a[i], a[j]);
            idx[a[j]] = j;
            idx[a[i]] = i;
        }
    }
    cout << ans.size() << '\n';
    for (auto& p : ans) {
        cout << p.first << ' ' << p.second << '\n';
    }
    return 0;
}