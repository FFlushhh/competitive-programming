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
    int hMax = 0, hMin = h, wMax = 0, wMin = w;
    rep (i, h) {
        cin >> s[i];
        rep (j, w) {
            if (s[i][j] == '#') {
                hMax = max(hMax, i);
                hMin = min(hMin, i);
                wMax = max(wMax, j);
                wMin = min(wMin, j);
            }
        }
    }
    for (int i = hMin; i <= hMax; ++i) {
        for (int j = wMin; j <= wMax; ++j) {
            if (s[i][j] == '.') {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}