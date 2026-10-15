#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    rep (i, n) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    vector<pair<int, int> > v;
    rep (i, n) {
        if (i == n - 1) {
            if (a[i].first != a[i - 1].first) {
                v.emplace_back(a[i].first, a[i].second);
            }
        }
        else if (i == 0) {
            if (a[i].first != a[i + 1].first) {
                v.emplace_back(a[i].first, a[i].second);
            }
        }
        else {
            if (a[i].first != a[i - 1].first && a[i].first != a[i + 1].first) {
                v.emplace_back(a[i].first, a[i].second);
            }
        }
    }
    sort(v.rbegin(), v.rend());
    cout << (v.empty() ? -1 : v[0].second) << endl;
    return 0;
}