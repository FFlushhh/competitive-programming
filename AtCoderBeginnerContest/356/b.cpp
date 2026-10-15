#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    vector<vector<int>> x(n, vector<int>(m));
    rep (i, m) {
        cin >> a[i];
    }
    rep (i, n) {
        rep (j, m) {
            cin >> x[i][j];
        }
    }
    rep (i, m) {
        int sum = 0;
        bool judge = false;
        rep (j, n) {
            sum += x[j][i];
            if (sum >= a[i]) {
                judge = true;
                break;
            }
        }
        if (!judge) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}