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
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    set<ll> st;
    map<ll, ll> mp;
    ll ans = 0;
    st.emplace(0);
    rep(i, n) {
        ll xi = x[i];
        auto it = st.lower_bound(xi);
        ll newd = LLONG_MAX;
        ll diff = 0;

        // 右隣の最短距離を更新
        if (it != st.end()) {
            ll p = *it;
            ll d = llabs(p - xi);
            newd = min(newd, d);
            if (mp.count(p)) {              // 既に寄与があるなら差し替え
                diff -= mp[p];
                mp[p] = min(mp[p], d);
                diff += mp[p];
            } else {                        // 未登録なら今回初めて寄与が生まれる
                mp[p] = d;
                diff += mp[p];
            }
        }
        // 左隣の最短距離を更新
        if (it != st.begin()) {
            auto itL = prev(it);
            ll p = *itL;
            ll d = llabs(p - xi);
            newd = min(newd, d);
            if (mp.count(p)) {
                diff -= mp[p];
                mp[p] = min(mp[p], d);
                diff += mp[p];
            } else {
                mp[p] = d;
                diff += mp[p];
            }
        }

        st.insert(xi);
        mp[xi] = newd;        // 新しく来た人の最近傍距離
        ans += diff + newd;   // 右/左隣の更新分 + 自分の分
        cout << ans << '\n';
    }
    return 0;
}