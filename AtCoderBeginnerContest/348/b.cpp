#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep (i, n) {
        cin >> x[i] >> y[i];
    }
    rep (i, n) {
        double dist = 0;
        int pos = 0;
        rep (j, n) {
            double calc = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
            if (dist < calc) {
                dist = calc;
                pos = j;
            }
        }
        cout << pos + 1 << endl;
    }
    return 0;
}