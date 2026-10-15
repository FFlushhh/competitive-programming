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
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<ll, ll> > a(n);
        ll mxp = 0;
        rep(i, n) {
            cin >> a[i].second >> a[i].first;
            mxp += a[i].first;
        }
        int ans = 0;
        int cnt = 0;
        ll p = mxp, w = 0;

        vector<ll> pw(n);
        rep(i, n) pw[i] = a[i].first + a[i].second;
        sort(all(pw));
        rep(i, n) {
            p -= pw[i];
            if (p <)
        }
        cout << ans << endl;
    }
    return 0;
}