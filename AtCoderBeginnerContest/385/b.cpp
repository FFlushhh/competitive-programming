#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w, x, y;
    cin >> h >> w >> x >> y;
    vector<string> s(h);
    string t;
    rep (i, h) cin >> s[i];
    cin >> t;
    --x;
    --y;
    int count = 0;
    rep (i, t.size()) {
        if (t[i] == 'U') {
            if (x - 1 >= 0 && s[x - 1][y] != '#') {
                --x;
                if (s[x][y] == '@') {
                    ++count;
                    s[x][y] = '.';
                }
            }
        } else if (t[i] == 'D') {
            if (x + 1 < h && s[x + 1][y] != '#') {
                ++x;
                if (s[x][y] == '@') {
                    ++count;
                    s[x][y] = '.';
                }
            }
        } else if (t[i] == 'L') {
            if (y - 1 >= 0 && s[x][y - 1] != '#') {
                --y;
                if (s[x][y] == '@') {
                    ++count;
                    s[x][y] = '.';
                }
            }
        } else if (t[i] == 'R') {
            if (y + 1 < w && s[x][y + 1] != '#') {
                ++y;
                if (s[x][y] == '@') {
                    ++count;
                    s[x][y] = '.';
                }
            }
        }
    }
    cout << x + 1 << endl;
    cout << y + 1 << endl;
    cout << count << endl;
    return 0;
}