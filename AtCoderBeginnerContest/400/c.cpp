#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i * i * 2 <= n; i += 2) {
        ll now = i * i;
        while (true) {
            now *= 2;
            if (now > n) break;
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}