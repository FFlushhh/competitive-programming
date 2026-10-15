#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i, n) {
        a[i] = i + 1;
    }
    reverse(a.begin() + l - 1, a.begin() + r);
    rep(i, n) {
        cout << a[i] << " ";
    }
    return 0;
}
// reverse関数を使って、l番目からr番目までの要素を逆順にする。
// reverse(開始位置, 終了位置)