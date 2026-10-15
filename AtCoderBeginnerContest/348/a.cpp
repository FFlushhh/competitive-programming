#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    rep (i, n) {
        if ((i + 1) % 3 == 0) {
            cout << 'x';
            continue;
        }
        cout << 'o';
    }
    return 0;
}