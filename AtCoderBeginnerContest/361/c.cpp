#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<ll> a(n);
    rep (i, n) cin >> a[i];
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    rep (i, k) {
        if (abs(a[l + 1] - a[r]) <= abs(a[l] - a[r - 1])) {
            ++l;
        }
        else if (abs(a[l + 1] - a[r]) > abs(a[l] - a[r - 1])) {
            --r;
        }
    }
    cout << abs(a[l] - a[r]) << endl;
    return 0;
}

// 間違い
// 正解: N-K個の残すもののmax-minを考える