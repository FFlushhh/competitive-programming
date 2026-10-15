#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, q;
    cin >> n >> q;
    unordered_map<ll, ll> mp;
    vector<pair<ll, ll>> pigeon(n + 1);
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        mp[i]++;
        pigeon[i] = make_pair(i, i);
    }
    rep (iq, q) {
        int sgn;
        cin >> sgn;
        if (sgn == 1) {
            ll p, h;
            cin >> p >> h;
            mp[h]++;
            if (mp[h] == 2) cnt++;
            mp[pigeon[p].second]--;
            if (mp[pigeon[p].second] == 1) cnt--;
            pigeon[p].second = h;
        }
        else {
            cout << cnt << endl;
        }
    }
    return 0;
}