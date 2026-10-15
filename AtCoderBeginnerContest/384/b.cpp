#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, r;
    cin >> n >> r;
    vector<int> d(n);
    vector<int> a(n);
    rep (i, n) {
        cin >> d[i] >> a[i];
    }
    rep (i, n) {
        if (d[i] == 1) {
            if (r >= 1600 && r <= 2799) {
                r += a[i];
            }
        }
        else {
            if (r >= 1200 && r <= 2399) {
                r += a[i];
            }
        }
    }
    cout << r << endl;
    return 0;
}