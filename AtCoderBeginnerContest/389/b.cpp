#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll x;
    cin >> x;
    ll ans = 1;
    for (ll i = 1; ans <= x; ++i) {
        ans = ans * i;
        if (ans == x) {
            cout << i << endl;
            return 0;
        }
    }
    return 0;
}