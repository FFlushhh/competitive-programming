#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    vector<int> c(n + m);
    rep(i, n) cin >> a[i];
    rep(i, m) cin >> b[i];
    c = a;
    c.insert(c.end(), b.begin(), b.end());
    sort(c.begin(), c.end());
    rep (i, n + m) {
        rep (j, n) {
            if (c[i] == a[j]) {
                rep  (k, n) {
                    if (c[i + 1] == a[k]) {
                        cout << "Yes" << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

// setを使えば便利