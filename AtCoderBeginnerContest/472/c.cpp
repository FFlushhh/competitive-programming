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
    
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    vector<bool> ate(n);
    rep(i, n) cin >> a[i];

    ll sum = 0;
    for (int i = 0; i < m; ++i) {
        if (sum + a[i] <= k) {
            sum += a[i];
            ate[i] = true;
            Yes;
        } else {
            No;
        }
    }
    for (int i = m; i < n; ++i) {
        if (ate[i - m]) {
            sum -= a[i - m];
        }
        if (sum + a[i] <= k) {
            sum += a[i];
            ate[i] = true;
            Yes;
        } else {
            No;
        }
        
    }
    return 0;
}