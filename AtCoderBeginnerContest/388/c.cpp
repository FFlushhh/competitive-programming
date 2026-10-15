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
    vector<ll> a(n);
    // map<int, int> mp;
    rep (i, n) {
        cin >> a[i];
        // if (mp[a[i]] == 0) {
        //     mp[a[i]] = i;
        // }
    }
    ll ans = 0;
    // rep (i, n) {
    //     int num = a[i] * 2;
    //     if (num > a[n - 1]) {
    //         cout << ans << endl;
    //         return 0;
    //     }
    //     while (!mp[num]) {
    //         ++num;
    //     }
    //     cout << num << endl;
    //     cout << "ans: " << ans << endl;
    //     ans += n - mp[num];
    // }
    rep (i, n) {
        ll num = a[i] * 2;
        if (num > a[n - 1]) {
            cout << ans << endl;
            return 0;
        }
        auto it = lower_bound(a.begin() + i, a.end(), num);
        // cout << "it: " << (it - a.begin()) << endl;
        ans += n - (it - a.begin());
        // cout << "ans: " << ans << endl;
    }
    cout << ans << endl;
    return 0;
}
