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
    
    int s, a, b, x;
    cin >> s >> a >> b >> x;
    ll ans = 0;
    int now = 0;
    while (now < x) {
        if (now + a < x) {
            ans += s * a;
            now += a;
        } else {
            ans += s * (x - now);
            break;
        }
        now += b;
    }
    cout << ans << endl;
    return 0;
}