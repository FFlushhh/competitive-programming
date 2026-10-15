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
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    vector<int> c = a;
    sort(c.begin(), c.end());
    vector<ll> sum(n + 1, 0);
    rep (i, n) sum[i + 1] = sum[i] + c[i];
    rep (i, n) {
        auto it = upper_bound(c.begin(), c.end(), a[i]);
        cout << sum[n] - sum[it - c.begin()] << endl;
    }
    return 0;
}