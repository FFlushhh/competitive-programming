#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    rep (i, n) {
        rep (j, n) {
            int x;
            cin >> x;
            if (x == 1) {
                cout << j + 1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}