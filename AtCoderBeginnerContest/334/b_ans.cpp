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
    r -= l;
    a -= l;
    a %= m; // aを[0, m)の範囲に収める1
    if (a < 0) a += m; // aを[0, m)の範囲に収める2、は正の値で0に最も近い木の位置
    cout << (r - a + m) / m << endl; // r - aが負の値の場合はmを足すことで対応可能、r - aが正の値の場合はmを足しても変わらない
    return 0;
}