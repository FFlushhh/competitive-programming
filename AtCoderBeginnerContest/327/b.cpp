#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll b;
    cin >> b;
    ll a = 1;
    for (int i = 1; a <= b; ++i) {
        a = 1;
        for (int j = 0; j < i; ++j) {
            a *= i;
        }
        if (a == b) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}

// pow関数だと誤差が発生
// 素直にfor文で計算する