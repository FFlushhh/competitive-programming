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

// 型変換に注意
template <class T, class U>
inline bool chmin(T &a, const U &b)
{
    return b < a ? (a = b, true) : false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<pair<ll, ll> > ab(n);
        rep(i, n) cin >> ab[i].first >> ab[i].second;

        ll diffSum = 0;
        rep(i, n) diffSum += abs(ab[i].first - ab[i].second);

        sort(all(ab));

        int ti = 0;
        ll ans = 0;
        rep(i, n) {
            if (i == 0) continue;
            ll d = ab[i].first - ab[i].second;
            if (d > diffSum / 2) {
                ti++;
                ans += ab[i].second;
            } else {
                ans += ab[i].first;
            }
        }

        ans += ab[0].first * ti;

        cout << diffSum << " " << ans << endl;
    }
    return 0;
}

/*
bより小さいaがあったら、積極的に使いたい
- 差に注目する
    - aとbの差が小さいならば、クーポンを使う意味はない

- 差が小さく、最も小さいaを使う

なぜテストケース1では最初に「6 - 5」を買っている？
*/