#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    map<int, int> dp;
    int ans = 0;
    rep(i, n) {
        dp[a[i]] = max(dp[a[i]], dp[a[i] - 1] + 1);
        ans = max(ans, dp[a[i]]);
    }
    cout << ans << endl;
    return 0;
}


// ====================


// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)
// #define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
// #define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
// #define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define Yes cout << "Yes" << endl
// #define No cout << "No" << endl
// const long long INF = 1LL<<60;

// // https://qiita.com/drken/items/68b8503ad4ffb469624c より改変
// // https://tooh.hatenadiary.jp/entry/2019/03/29/230839 を参考
// // 最長増加部分列の長さを求める
// int LIS(const vector<long long> &a) {
//     int N = (int)a.size();
//     vector<bool> used(N, false);
//     vector<long long> dp(N + 1, INF);
//     for (int i = 0; i < N; ++i) {
//         used[a[i]] = true;
//         if (used[a[i]-1]) {
//             dp[a[i]] = dp[a[i]-1] + 1;
//         } else {
//             dp[a[i]] = 1;
//         }
//     }

//     // dp[k] < INF となる最大の k に対して k+1 が答え
//     // それは dp[k] >= INF となる最小の k に一致する
//     return lower_bound(dp.begin(), dp.end(), INF) - dp.begin();
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int n;
//     cin >> n;
//     vector<ll> a(n);
//     rep(i, n) cin >> a[i];
//     cout << LIS(a) << endl;
//     return 0;
// }