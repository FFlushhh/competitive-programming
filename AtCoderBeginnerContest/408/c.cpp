#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> l(m), r(m);
    rep (i, m) cin >> l[i] >> r[i];
    vector<int> sum1(n + 1, 0);
    rep (i, m) {
        sum1[l[i]]++;
        if (r[i] + 1 <= n) {
            sum1[r[i] + 1]--;
        }
    }
    for (int i = 1; i <= n; ++i) {
        sum1[i] += sum1[i - 1];
    }
    int ans = INT_MAX;
    for (int i = 1; i <= n; ++i) {
        ans = min(ans, sum1[i]);
    }
    cout << ans << endl;
    return 0;
}