#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
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
    ll ans = 0;
    rep(i, n) {
        rep(j, n) {
            if (j < i) continue;
            ll sum = 0;
            for (int k = i; k <= j; ++k) sum += a[k];
            bool ok = true;
            for (int k = i; k <= j; ++k) {
                if (sum % a[k] == 0) ok = false;
            }
            if (ok) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}