#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    rep(i, n) cin >> a[i];

    ll ans = 1;
    vector<int> cnt(2e5 + 1);

    rep(i, n) {
        // 直前が同じ数字だったら、行う操作は直前と全く同じ
        if (i > 0 && a[i] != a[i - 1]) ans += i - cnt[a[i]];
        cnt[a[i]]++;
    }

    cout << ans << endl;

    return 0;
}