#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int di[] = {1, 0, -1, 0, 1, 1, -1, -1};
int dj[] = {0, 1, 0, -1, 1, -1, 1, -1};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep (i, h) cin >> s[i];
    string snuke = "snuke";
    vector<pair<int, int>> ans;
    rep (i, h) rep (j, w) {
        bool ok = false;
        rep (d, 8) {
            int ni = i, nj = j;
            rep (k, 5) {
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) break;
                if (s[ni][nj] != snuke[k]) break;
                if (k == 4) {
                    rep (i, 5) {
                        ans.emplace_back(ni, nj);
                        ni -= di[d];
                        nj -= dj[d];
                    }
                    break;
                }
                ni += di[d];
                nj += dj[d];
            }
        }
    }
    reverse(ans.begin(), ans.end());
    rep (i, ans.size()) {
        cout << ans[i].first + 1 << " " << ans[i].second + 1 << endl;
    }
    return 0;
}