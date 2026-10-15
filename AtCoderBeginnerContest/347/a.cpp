#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, k;
    cin >> n >> k;
    rep (i, n) {
        int x;
        cin >> x;
        if (x % k != 0) continue;
        cout << x / k << " ";
    }
    return 0;
}