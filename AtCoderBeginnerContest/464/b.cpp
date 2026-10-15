#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    int sh = 0, gh = h - 1, sw = 0, gw = w - 1;
    rep(i, h) {
        bool ok = true;
        rep(j, w) {
            if (s[i][j] == '#') {
                ok = false;
                sh = max(sh, i - 1);
                break;
            }
        }
        if (!ok) {
            sh = max(sh, i);
            break;
        }
    }
    for (int i = h - 1; i >= 0; --i) {
        bool ok = true;
        rep(j, w) {
            if (s[i][j] == '#') {
                ok = false;
            }
        }
        if (!ok) {
            gh = min(i, gh);
            break;
        }
    }
    rep(j, w) {
        bool ok = true;
        rep(i, h) {
            if (s[i][j] == '#') {
                ok = false;
            }
        }
        if (!ok) {
            sw = max(sw, j);
            break;
        }
    }
    for (int j = w - 1; j >= 0; --j) {
        bool ok = true;
        rep(i, h) {
            if (s[i][j] == '#') {
                ok = false;
            }
        }
        if (!ok) {
            gw = min(gw, j);
            break;
        }
    }
    for (int i = sh; i <= gh; ++i) {
        for (int j = sw; j <= gw; ++j) {
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}