#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll it, jt, ia, ja;
    cin >> it >> jt >> ia >> ja;
    ll n, m, l;
    cin >> n >> m >> l;
    vector<char> s(m), t(l);
    vector<ll> a(m), b(l);
    rep(i, m) cin >> s[i] >> a[i];
    rep(i, l) cin >> t[i] >> b[i];
    ll cntT = 0, cntA = 0;
    ll nowA = 0;
    ll ans = 0;
    rep(i, m) {
        ll di = 0, dj = 0;
        if (s[i] == 'R') {
            di = abs(it - a[i]);
            it += a[i];
        }
        else if (s[i] == 'L') {
            di = abs(it - a[i]);
            it -= a[i];
        }
        else if (s[i] == 'U') {
            dj = abs(jt - a[i]);
            jt += a[i];
        }
        else if (s[i] == 'D') {
            dj = abs(jt - a[i]);
            jt -= a[i];
        }
        while (true) {
            ll dii = 0, djj = 0;
            if (b[nowA] <= a[i]) {
                if (t[nowA] == 'R') {
                    dii = abs(it - b[nowA]);
                    ia += b[nowA];
                }
                else if (t[nowA] == 'L') {
                    dii = abs(it - b[nowA]);
                    ia -= b[nowA];
                }
                else if (t[nowA] == 'U') {
                    djj = abs(jt - b[nowA]);
                    ja += b[nowA];
                }
                else if (t[nowA] == 'D') {
                    djj = abs(jt - b[nowA]);
                    ja -= b[nowA];
                }
                if (ia == it && ja == jt) {
                    if ((dii == 0 && di == 0) || (djj == 0 && dj == 0)) {
                        ans += b[nowA];
                    } else {
                        if (di == 0) {
                            if (djj )
                        }
                    }
                }
            }
        }
    }
    return 0;
}