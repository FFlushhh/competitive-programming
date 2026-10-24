#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vll = vector<long long>;
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

    ll n, k;
    cin >> n >> k;

    vll a(n);
    rep(i, n) cin >> a[i];

    ll ans = 0;
    ll prev = a[0];
    
    if (prev == k) ans++;
    for (int i = 1; i < n; ++i) {
        if ((prev < k && k <= a[i]) || (k < prev && a[i] <= k)) {
            ++ans;
        }
        prev = a[i];
    }
    cout << ans << endl;

    return 0;
}