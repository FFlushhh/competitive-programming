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
    
    ll n, m, k, x, y;
    cin >> n >> m >> k >> x >> y;

    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];

    sort(all(a));
    sort(all(b));

    cout << endl;
    rep(i, n) cout << a[i] << " ";
    cout << endl;
    rep(i, m) cout << b[i] << " ";
    cout << endl;

    vector<bool> oka(n), okb(m);
    ll ans = 0;

    vector<pair<ll, ll> > oturia(n);
    rep(i, n) {
        oturia[i].first = a[i] % k;
        oturia[i].second = a[i];
    }
    sort(rall(oturia));

    vector<pair<ll, ll> > oturib(m);
    rep(i, m) {
        oturib[i].first = b[i] % k;
        oturib[i].second = b[i];
    }
    sort(rall(oturib));

    cout << endl;
    rep(i, m) {
        if (!okb[i] && b[i] % k == 0 && y - b[i] / k >= 0) {
            ans++;
            y -= b[i] / k;
            okb[i] = true;

            cout << "sign3" << endl;
            cout << "x: " << x << " " << "y: " << y << endl;
            
        }
    }
    
    // Bのおつりもらえる順
    rep(i, m) {
        if (!okb[i] && )
    }

    // Bの安い順
    rep(i, m) {
        if (!okb[i] && (y - (b[i] / k + 1)) >= 0) {
            ans++;
            ll used = b[i] / k + 1;
            y -= used;
            x += used * k - b[i];
            okb[i] = true;
            cout << "sign4" << endl;
            cout << "x: " << x << " " << "y: " << y << endl;
        }
    }

    rep(i, n) {
        if (!oka[i]) {
            if (k * y + x < a[i]) break;

            if (k * y >= a[i]) {
                ll used = a[i] / k + 1;
                y -= used;
                x += used * k - a[i];
                cout << "sign1" << endl;
            } else {
                ll left = a[i] - k * y;
                y = 0;
                x -= a[i];
                cout << "sign2" << endl;
            }

            ans++;
            oka[i] = true;
            cout << "x: " << x << " " << "y: " << y << endl;
        }
    }

    rep(i, n)  cout << a[i] << ": "  << oka[i] << " ";
    cout << endl;
    rep(i, m) cout << b[i] << ": " << okb[i] << " ";
    cout << endl;

    cout << ans << endl;
    return 0;
}

/*
1ドル紙幣は、デザートしか使えない
-> 1ドル紙幣はすべてAへ
*/