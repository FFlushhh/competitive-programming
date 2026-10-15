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
    string s;
    cin >> s;
    // A
    ll ans = LLONG_MAX;
    ll cnt = 0;
    vector<ll> sa(2 * n + 1);
    rep(i, 2 * n) sa[i + 1] = sa[i] + (s[i] == 'A' ? 1 : 0);
    vector<ll> sb(2 * n + 1);
    rep(i, 2 * n) sb[i + 1] = sb[i] + (s[i] == 'B' ? 1 : 0);
    ll now = 1;
    for (ll i = 0; i < n; i++) {
        ll pidx = i * 2;
        ll idx = lower_bound(sa.begin(), sa.end(), now) - sa.begin() - 1;
        cnt += abs(pidx - idx);
        now++;
    }
    ans = min(ans, cnt);
    // B
    now = 1;
    cnt = 0;
    for (ll i = 0; i < n; i++) {
        ll pidx = i * 2;
        ll idx = lower_bound(sb.begin(), sb.end(), now) - sb.begin() - 1;
        cnt += abs(pidx - idx);
        now++;
    }
    ans = min(ans, cnt);
    cout << ans << '\n';
    return 0;
}