#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    int water = 0;
    cin >> n;
    vector<int> t(n), v(n);
    rep (i, n) {
        cin >> t[i] >> v[i];
    }
    rep (i, n) {
        if (i > 0) {
            water -= t[i] - t[i - 1];
            if (water < 0) {
                water += abs(water);
            }
        }
        water += v[i];
    }
    cout << water << endl;
    return 0;
}