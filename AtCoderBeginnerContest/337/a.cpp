#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int takahashi = 0, aoki = 0;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        takahashi += a;
        aoki += b;
    }
    if (takahashi > aoki) {
        cout << "Takahashi" << endl;
    } else if (takahashi < aoki) {
        cout << "Aoki" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}