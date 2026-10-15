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
    rep(i, h) cin >> s[i];
    rep (i, h) {
        rep (j, w) {
            if (s[i][j] == '.') {
                bool horizontalL = false;
                bool horizontalR = false;
                bool verticalU = false;
                bool verticalD = false;
                for (int k = j - 1; k >= 0; k--) {
                    if (s[i][k] == '#') {
                        horizontalL = true;
                        break;
                    }
                }
                for (int k = j + 1; k < w; k++) {
                    if (s[i][k] == '#') {
                        horizontalR = true;
                        break;
                    }
                }
                for (int k = i - 1; k >= 0; k--) {
                    if (s[k][j] == '#') {
                        verticalU = true;
                        break;
                    }
                }
                for (int k = i + 1; k < h; k++) {
                    if (s[k][j] == '#') {
                        verticalD = true;
                        break;
                    }
                }
                if ((horizontalL && horizontalR) || (verticalU && verticalD)) {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}