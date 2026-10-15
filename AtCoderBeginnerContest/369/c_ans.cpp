#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

/*
方針
尺取り法
    等差数列ならrightを進める
    等差数列でなくなったらその前までの数列の個数を足し、leftを進める
    これを繰り返す
*/

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 2 * n - 1;
    int right = 0;
    for (int left = 0; left < n; ++left) {
        int diff = a[left + 1] - a[left];
        while (right < n && a[right + 1] - a[right] == diff) {
            ++right;
        }
        ans += right - left - 1;
    }
    cout << ans << endl;
    return 0;
}