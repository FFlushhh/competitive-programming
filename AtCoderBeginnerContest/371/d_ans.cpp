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
    vector<ll> x(n);
    vector<int> p(n);
    rep (i, n) cin >> x[i];
    rep (i, n) cin >> p[i];
    vector<ll> sum(n + 1);
    rep (i, n) sum[i + 1] = sum[i] + p[i];
    int q;
    cin >> q;
    while (q--) {
        ll l, r;
        cin >> l >> r;
        l = lower_bound(x.begin(), x.end(), l) - x.begin();
        r = upper_bound(x.begin(), x.end(), r) - x.begin();
        cout << sum[r] - sum[l] << endl;
    }
    return 0;
}

/*
方針
lとrの範囲が大きい（-10^9~10^9）
二分探索でlとrの位置を求める
*/


// #include <bits/stdc++.h>
// #include <time.h>
// using namespace std;
// using ll = long long;
// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// int main()
// {
//     clock_t start = clock();
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n;
//     cin >> n;
//     vector<ll> x(n);
//     vector<int> p(n);
//     rep (i, n) {
//         ll xi;
//         cin >> xi;
//         x[i] = xi + 1e9;
//     }
//     rep (i, n) cin >> p[i];
//     vector<ll> sum;
//     int s = 0;
//     rep (i, n) {
//         if (i == 0) {
//             vector<ll> tmp(x[i], s);
//             sum = tmp;
//             s += p[i];
//         }
//         else {
//             vector<ll> tmp(x[i] - x[i - 1], s);
//             sum.insert(sum.end(), tmp.begin(), tmp.end());
//             s += p[i];
//         }
//     }
//     int q;
//     cin >> q;
//     while (q--) {
//         ll l, r;
//         cin >> l >> r;
//         cout << sum[r] - sum[l - 1] << endl;
//     }
//     return 0;
// }