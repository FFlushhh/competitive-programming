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
    
    int n;
    cin >> n;
    unordered_map<ll, ll> mp;
    rep(i, n) {
        ll a;
        cin >> a;
        mp[a]++;
    }
    ll ans = 0;
    for (auto [key, val] : mp) {
        ll v = val * (val - 1) / 2;
        if (v > 0) v *= (n - val);
        ans += v;
    }
    cout << ans << endl;
    return 0;
}