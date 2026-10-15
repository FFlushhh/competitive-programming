#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> a(9, vector<int>(9));
    rep (i, 9) rep (j, 9) cin >> a[i][j];
    bool judge = true;
    rep (i, 9) {
        set<int> s;
        rep (j, 9) {
            if (s.count(a[i][j])) {
                judge = false;
            }
            s.insert(a[i][j]);
        }
        if (s.size() != 9) {
            judge = false;
        }
    }
    rep (j, 9) {
        set<int> s;
        rep (i, 9) {
            if (s.count(a[i][j])) {
                judge = false;
            }
            s.insert(a[i][j]);
        }
        if (s.size() != 9) {
            judge = false;
        }
    }
    for (int i = 0; i < 9; i += 3) {
        for (int j = 0; j < 9; j += 3) {
            set<int> s;
            for (int k = i; k < i + 3; ++k) {
                for (int l = j; l < j + 3; ++l) {
                    if (s.count(a[k][l])) {
                        judge = false;
                    }
                    s.insert(a[k][l]);
                }
            }
            if (s.size() != 9) {
                judge = false;
            }
        }
    }
    cout << (judge ? "Yes" : "No") << endl;
    return 0;
}