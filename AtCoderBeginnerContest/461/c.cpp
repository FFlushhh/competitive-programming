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
    
    int n, k, m;
    cin >> n >> k >> m;
    set<int> s;
    vector<pair<ll, ll> > vc(n);
    rep(i, n) {
        cin >> vc[i].second >> vc[i].first;
    }
    sort(rall(vc));
    ll ans = 0;
    rep(i, n) {
        auto [v, c] = vc[i];
        if (!s.count(c)) {
            m--;
        }
        else if (k <= m) continue;
        s.emplace(c);
        ans += v;
        k--;
        if (k == 0) break;
    }
    cout << ans << endl;
    return 0;
}