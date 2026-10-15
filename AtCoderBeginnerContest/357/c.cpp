#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

void func(int n)
{
    int r = 1;
    rep (i, n) r *= 3;
    rep (i, r) {
        rep (j, r) {
            if (i == r / 2 && j == r / 2) cout << ".";
            else cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int r = 1;
    rep (i, n) r *= 3;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (i == r / 2 && j == r / 2) func(n);
            else func(n - 1);
        }
    }
    return 0;
}

// 再帰で実装したい