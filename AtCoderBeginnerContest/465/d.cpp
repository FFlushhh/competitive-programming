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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        ll x, y, k;
        cin >> x >> y >> k;
        // ll now = x;
        ll ans = 0;
        // unordered_map<ll, ll> mpx;
        // unordered_map<ll, ll> mpy;
        ll cnt = 0;
        while (1) {
            if (x == y) {
                ans = cnt;
                break;
            }
            if (x > y) {
                x /= k;
            } else if (x < y) {
                y /= k;
            }
            cnt++;
        }
        // while (1) {
        //     mpx[x] = cnt;
        //     mpy[y] = cnt;
        //     if (mpx.count(y)) {
        //         ans = mpx[y] + mpy[y];
        //         cout << mpx[y] << " " << mpy[y] << endl;
        //         break;
        //     }
        //     x /= k;
        //     y /= k;
        //     cnt++;
        // }
        // while (1) {
        //     if (now == y) break;

        //     if (now > y) now = now / k;
        //     else now = now * k;
        //     ans++;
        // }
        cout << ans << endl;
    }
    return 0;
}