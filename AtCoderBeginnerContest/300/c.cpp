#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int di[] = {1, 1, -1, -1, 0, 0, 1, -1};
int dj[] = {1, -1, -1, 1, 1, -1, 0, 0};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> c(h);
    rep (i, h) cin >> c[i];
    int n = min(h, w);
    vector<int> s(n + 1, 0);
    rep (i, h) {
        rep (j, w) {
            int cnt = 0;
            if (c[i][j] == '.') continue;
            while (true) {
                bool judge1 = true, judge2 = true;
                rep (k, 4) {
                    int ni = i + di[k] * (cnt + 1);
                    int nj = j + dj[k] * (cnt + 1);
                    if (ni < 0 || ni >= h || nj < 0 || nj >= w) {
                        judge1 = false;
                        break;
                    }
                    if (c[ni][nj] != '#') {
                        judge1 = false;
                        break;
                    }
                    if (k == 3) judge1 = true;
                }
                if (judge1 && judge2) cnt++;
                else break;
            }
            if (cnt > 0) s[cnt]++;
        }
    }
    for (int i = 1; i <= n; ++i) cout << s[i] << " ";
    return 0;
}