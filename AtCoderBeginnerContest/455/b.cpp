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
    ll ans = 0;
    rep(h1, h) {
        rep(w1, w) {
            for (int h2 = h1; h2 < h; ++h2) {
                for (int w2 = w1; w2 < w; ++w2) {
                    bool ok = true;
                    if (h1 > h2 || w1 > w2) break;
                    for (int i = h1; i <= h2; ++i) {
                        for (int j = w1; j <= w2; ++j) {
                            if (s[i][j] != s[h1 + h2 - i][w1 + w2 - j]) ok = false;
                        }
                    }
                    if (ok) ans++;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}