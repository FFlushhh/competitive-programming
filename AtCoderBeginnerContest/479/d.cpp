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

// type: [ long long ]
constexpr long long INFLL = 1LL << 60;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    
    vector<ll> l(n), r(n);
    for (int i = 1; i < n; ++i) cin >> l[i];
    for (int i = 0; i < n - 1; ++i) cin >> r[i];

    vector<ll> suffixMinL(n, INFLL), prefixMinR(n, INFLL);
    
    suffixMinL[n - 1] = l[n - 1];
    prefixMinR[0] = r[0];

    for (int i = n - 2; i > 0; --i) {
        suffixMinL[i] = min(suffixMinL[i + 1], l[i]);
    }
    for (int i = 1; i < n - 1; ++i) {
        prefixMinR[i] = min(prefixMinR[i - 1], r[i]);
    }


    while (q--) {
        int s, t;
        cin >> s >> t;

        s--; t--;
        ll ans = INFLL;

        if (s < t) {
            ans = min(r[s], l[s] + prefixMinR[s]);
        } else {
            ans = min(l[s], r[s] + suffixMinL[s]);
        }

        cout << ans << endl;
    }
    return 0;
}

/*
高々2回で目的地に行ける

一発で行くのと、コストが少ないように2回で行くののminをとる

2回の場合は
    L -> R

    R -> L

    の2通り

*/