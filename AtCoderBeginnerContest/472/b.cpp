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
    
    int n;
    cin >> n;
    vector<int> l(n);
    rep(i, n) cin >> l[i];

    ll sum = accumulate(all(l), 0LL);

    ll left = 0;
    ll ans = INFLL;
    rep(i, n) {
        left += l[i];
        ll r = sum - left;
        ll d = abs(left - r);
        ans = min(ans, d); 
    }
    cout << ans << endl;
    return 0;
}