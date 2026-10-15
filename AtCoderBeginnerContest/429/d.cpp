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
    
    ll n, m, c;
    cin >> n >> m >> c;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    sort(a.begin(), a.end());
    vector<pair<ll, ll> > rle;
    ll prev = a[0];
    ll cnt = 0;
    for (int i = 1; i < n; ++i) {
        cnt++;
        if (a[i] != prev) {
            rle.emplace_back(prev, cnt);
            cnt = 0;
        }
        prev = a[i];
    }
    cnt++;
    rle.emplace_back(prev, cnt);
    rep(i, rle.size()) rle.emplace_back(rle[i].first + m, rle[i].second);

    ll ans = 0;
    ll j = 0;
    ll sum = 0;
    rep(i, rle.size()) {
        while (j < rle.size())
    }

    return 0;
}