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
    
    int n, r;
    cin >> n >> r;
    vector<int> l(n);
    rep(i, n) cin >> l[i];
    vector<int> left(l.begin(), l.begin() + r);
    vector<int> right(l.begin() + r, l.end());
    ll ans = 0;
    int idx = 0;
    rep(i, left.size()) {
        if (left[i] == 1) ++idx;
        else break;
    }
    int cnt = 0;
    for (int i = idx; i < left.size(); ++i) if (left[i] == 1) ++cnt;
    ans += left.size() - idx + cnt;
    reverse(right.begin(), right.end());
    idx = 0;
    rep(i, right.size()) {
        if (right[i] == 1) ++idx;
        else break;
    }
    cnt = 0;
    for (int i = idx; i < right.size(); ++i) if (right[i] == 1) ++cnt;
    ans += right.size() - idx + cnt;
    cout << ans << '\n';
    return 0;
}