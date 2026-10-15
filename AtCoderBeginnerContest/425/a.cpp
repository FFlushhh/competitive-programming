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
    ll ans = 0;
    rep1(i, n) {
        ans += (i % 2 == 0 ? 1 : -1) * i * i * i;
    }
    cout << ans << '\n';
    return 0;
}