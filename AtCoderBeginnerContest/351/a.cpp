#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int aoki = 0;
    int takahashi = 0;
    rep (i, 9) {
        int x;
        cin >> x;
        takahashi += x;
    }
    rep (i, 8) {
        int x;
        cin >> x;
        aoki += x;
    }
    if (takahashi < aoki) {
        cout << 0 << endl;
        return 0;
    }
    cout << takahashi - aoki + 1 << endl;
    return 0;
}