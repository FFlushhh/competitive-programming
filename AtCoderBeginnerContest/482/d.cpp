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

    vector<ll> x(n);
    rep(i, n) cin >> x[i];

    rep(i, n) {
        ll l = x[i] - x.front();
        ll r = x.back() - x[i];

        ll l_half = (l - 1) / 2;
        ll r_half = (r - 1) / 2;

        if (l_half == r_half) {
            cout << l_half + r_half << endl;
        } else {
            cout << max(l_half, r_half) + 1 << endl;
        }
    }

    return 0;
}