#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep (i, n - 1) cin >> a[i];
    for (int i = 0; i <= 100; ++i) {
        a[n - 1] = i;
        int sum = 0, mx, mn;
        rep (j, n) {
            sum += a[j];
            if (j == 0) {
                mx = a[j];
                mn = a[j];
            } else {
                mx = max(mx, a[j]);
                mn = min(mn, a[j]);
            }
        }
        sum -= (mn + mx);
        if (sum >= x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

/*
配列aの末尾を1ずつ増やしていく
    rep(i, n - 1) cin >> a[i];
    while (a.back() <= 100) {
        vector<int> b = a;
        sort(b.begin(), b.end());
        int sum = 0;
        for (int i = 1; i < n; ++i) sum += b[i];
        if (sum >= x) {
            cout << a.back() << endl;
            return 0;
        }
        ++a.back(); // デフォルト値は0、1ずつ増やす
    }
    cout << -1 << endl;
*/