#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> h(n);
    int max = 0;
    rep (i, n) cin >> h[i];
    rep (i, n) {
        if (h[i] > h[0]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}