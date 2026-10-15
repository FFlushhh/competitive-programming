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
    
    int n, m;
    cin >> n >> m;
    unordered_map<ll, ll> mp;
    vector<tuple<ll, ll, ll> > v;
    rep(i, n) {
        int a, d, b;
        cin >> a >> d >> b;
        v.emplace_back(d, a, b);
        mp[a]++;
    }
    sort(all(v));
    int now = 1;
    rep(i, n) {
        auto [d, a, b] = v[i];
        for (int k = now; k < d; ++k) {
            cout << mp.size() << endl;
        }
        now = d;
        mp[a]--;
        mp[b]++;
        if (mp[a] <= 0) mp.erase(a);
    }
    for (int k = now; k <= m; ++k) {
        cout << mp.size() << endl;
    }
    return 0;
}