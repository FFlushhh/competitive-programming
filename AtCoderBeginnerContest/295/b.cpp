#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int r, c;
    cin >> r >> c;
    vector<string> s(r);
    rep (i, r) cin >> s[i];
    rep (i, r) {
        rep (j, c) {
            if (s[i][j] >= '1' && s[i][j] <= '9') {
                int x = s[i][j] - '0';
                rep (k, r) {
                    rep (l, c) {
                        int d = abs(i - k) + abs(j - l);
                        if (d <= x && s[k][l] == '#') {
                            s[k][l] = '.';
                        }
                    }
                }
                s[i][j] = '.';
            }
        }
    }
    rep (i, r) {
        cout << s[i] << endl;
    }
    return 0;
}