#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll d; // 1 <= d <= 2*10^12
    cin >> d;
    ll ans = d; // xとyが両方0の時、式は|d|
    ll y = 2e6;
    for (ll x = 0; x <= 2e6; ++x) {
        while (y > 0 && x * x + y * y > d) { // x^2 + y^2 > dの時、yを減らす
            --y;
        } // ループを抜けたとき、x * x + y * yはdを超えるギリギリ
        ans = min(ans, abs(x * x + y * y - d));
        ans = min(ans, abs(x * x + (y + 1) * (y + 1) - d));
    }
    cout << ans << endl;
    return 0;
}

// 円周を挟むような格子点の二つを比較