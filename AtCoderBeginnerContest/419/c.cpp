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
    vector<int> r(n), c(n);
    rep(i, n) cin >> r[i] >> c[i];
    sort(r.begin(), r.end());
    sort(c.begin(), c.end());
    int i = (r.back() - r.front()) / 2;
    int j = (c.back() - c.front()) / 2;
    if ((r.back() - r.front()) % 2) ++i;
    if ((c.back() - c.front()) % 2) ++j;
    cout << max(i, j) << endl;
    return 0;
}