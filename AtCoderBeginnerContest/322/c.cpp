#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep (i, m) cin >> a[i];
    int idx = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[idx] == i) {
            cout << 0 << endl;
            ++idx;
        }
        else {
            cout << a[idx] - i << endl;
        }
    }
    return 0;
}