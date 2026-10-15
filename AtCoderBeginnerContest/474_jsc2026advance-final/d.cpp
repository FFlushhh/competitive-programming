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
    
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    rep(i, n) cin >> a[i];
    rep(i, n) cin >> b[i];

    rep(i, n) {
        if (a[i] > b[i]) break;
        if (i == n - 1) {
            No;
            return 0;
        }
    }

    Yes;
    rep(i, n) {
        if (a[i] > b[i]) {
            cout << 1000000000000000000 << " ";
        } else {
            cout << 1 << " ";
        }
    }
    cout << endl;
    return 0;
}

/*
Aをソートする
一番重いやつを
*/