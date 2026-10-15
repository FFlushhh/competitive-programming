#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll a, m, l, r;
    cin >> a >> m >> l >> r;
    ll dif = r - l;
    if (dif == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else {
        ll ans = 1;
        r -= l;
        a -= l; // aは負の値を取ることもあるので×
        l = 0;
        ans += (r - a) / m; 
        ans += (a - l) / m;
        cout << ans << endl; // テストケース3の結果が1だけ違う
    }
    return 0;
}

// aをl(=0)とrの間に収める