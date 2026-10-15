#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ull ans = 0;
    rep (i, 64) {
        ull a;
        cin >> a;
        ans += a << i;
    }
    cout << ans << endl;
    return 0;
}

/*
long longの最大値は2^63 - 1
unsigned long longの最大値は2^64 - 1（符号なし）
a << i ... aをiビット左シフト → a * 2^i
*/