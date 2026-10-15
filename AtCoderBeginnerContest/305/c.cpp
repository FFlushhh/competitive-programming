#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep (i, h) cin >> s[i];
    rep (i, h) rep (j, w) {
        if (s[i][j] == '.') {
            bool UD = false, LR = false;
            if (i > 0 && s[i - 1][j] == '#' || i < h - 1 && s[i + 1][j] == '#') UD = true;
            if (j > 0 && s[i][j - 1] == '#' || j < w - 1 && s[i][j + 1] == '#') LR = true;
            if (UD && LR) {
                cout << i + 1 << " " << j + 1 << endl;
                return 0;
            }
        }
    }
    return 0;
}