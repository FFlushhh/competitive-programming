#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l = n / 2 - 1, r = n / 2;
    ll pos = -1;
    pos = lower_bound(s.begin(), s.end(), '1') - s.begin();
    ll ans = 0;
    ll cnt = 0;
    for (int i = pos; i >= 0; --i) {
        if (s[i] == '0') ++cnt;
        else {
            ans += cnt;
        }
    }
    cnt = 0;
    for (int i = pos; i < n; ++i) {
        if (s[i] == '0') ++cnt;
        else {
            ans += cnt;
        }
    }
    cout << ans << endl;
    return 0;
}