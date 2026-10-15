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
    
    ll n, q;
    cin >> n >> q;
    vector<ll> p(n);
    rep(i, n) cin >> p[i];
    vector<pair<int, int> > now(n + 1);
    rep(i, n) {
        now[p[i]] = {i, p[i]};
    }
    
    int cnt = 1;
    while (q--) {
        ll a;
        cin >> a;
        now[a].first = n + cnt - 1;
        cnt++;
    }
    sort(all(now));
    rep1(i, n) cout << now[i].second << " ";
    cout << endl;
    return 0;
}