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
    
    ll x, c;
    cin >> x >> c;
    for (ll i = 1000; ; i += 1000) {
        if (i + i * c / 1000 > x) {
            cout << i - 1000 << '\n';
            break;
        }
    }
    return 0;
}