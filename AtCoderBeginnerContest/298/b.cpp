#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

// 90 degrees clockwise rotation of a square integer matrix
// a[i][j] -> a[j][n - 1 - i]
vector<vector<int> > rotate90cw(const vector<vector<int> >& a)
{
    int n = a.size();
    vector<vector<int> > res(n, vector<int>(n));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            res[j][n - 1 - i] = a[i][j];
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n)), b(n, vector<int>(n));
    rep (i, n) rep (j, n) cin >> a[i][j];
    rep (i, n) rep (j, n) cin >> b[i][j];
    rep (r, 4) {
        bool ok = true;
        rep (i, n) rep (j, n) {
            if (a[i][j] == 1 && b[i][j] == 0) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
        a = rotate90cw(a);
    }
    cout << "No" << endl;
    return 0;
}