#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> s(n, string(n, '#'));
    int par = 0;
    rep (i, n) {
        if (i == 0) continue;
        if (par == 0) {
            rep (j, n - 2 * i) {
                rep (k, n - 2 * i) {
                    s[i + j][i + k] = '.';
                }
            }
        }
        else {
            rep (j, n - 2 * i) {
                rep (k, n - 2 * i) {
                    s[i + j][i + k] = '#';
                }
            }
        }
        par = 1 - par;
    }
    rep (i, n) {
        rep (j, n) {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}