#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

constexpr int di[] = {-1, 0, 1, 0};
constexpr int dj[] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];
    queue<pair<int, int> > q;
    queue<pair<int, int> > secondq;
    rep(i, h) rep(j, w) {
        if (s[i][j] == '#') secondq.emplace(i, j);
    }
    while (!secondq.empty()) {
        auto [i, j] = secondq.front();
        secondq.pop();
        int cnt = 0;
        rep(d, 4) {
            int ni = i + di[d];
            int nj = j + dj[d];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s[ni][nj] == '#') cnt++;
        }
        if (cnt == 1) {
            rep(d, 4) {
                int ni = i + di[d];
                int nj = j + dj[d];
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if (s[ni][nj] == '.') {
                    s[ni][nj] = '#';
                    q.emplace(ni, nj);
                }
            }
        }
        while (!q.empty()) {
            auto [i, j] = q.front();
            q.pop();
            rep(d, 4) {
                int ni = i + di[d];
                int nj = j + dj[d];
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if (s[ni][nj] == '.') {
                    s[ni][nj] = '#';
                    secondq.emplace(ni, nj);
                }
            }
        }
    }
    ll ans = 0;
    rep(i, h) rep(j, w) {
        if (s[i][j] == '#') ans++;
    }
    cout << ans << '\n';
    return 0;
}