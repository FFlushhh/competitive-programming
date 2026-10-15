#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};

// 型変換に注意
template <class T, class U>
inline bool chmin(T &a, const U &b)
{
    return b < a ? (a = b, true) : false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w;
    cin >> h >> w;
    vector<string> s1(h);
    rep(i, h) cin >> s1[i];
    int si, sj, gi, gj;
    rep(i, h) rep(j, w) {
        if (s1[i][j] == 'S') si = i, sj = j;
        if (s1[i][j] == 'G') gi = i, gj = j;
    }
    vector<vector<vector<ll> > > dist(h, vector<vector<ll> >(w, vector<ll>(2, LLONG_MAX)));
    queue<tuple<int, int, int> > q;
    q.emplace(si, sj, 0);
    dist[si][sj][0] = 0;
    while (!q.empty()) {
        auto [i, j, par] = q.front(); q.pop();
        rep(d, 4) {
            int ni = i + di[d];
            int nj = j + dj[d];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s1[ni][nj] == '#') continue;
            if (s1[ni][nj] == 'x' && par == 0) continue;
            if (s1[ni][nj] == 'o' && par == 1) continue;
            if (par == 0) {
                if (s1[ni][nj] == '?') {
                    if (chmin(dist[ni][nj][1], dist[i][j][0] + 1)) {
                        q.emplace(ni, nj, 1);
                    }
                } else {
                    if (chmin(dist[ni][nj][0], dist[i][j][0] + 1)) {
                        q.emplace(ni, nj, 0);
                    }
                }
            } else {
                if (s1[ni][nj] == '?') {
                    if (chmin(dist[ni][nj][0], dist[i][j][1] + 1)) {
                        q.emplace(ni, nj, 0);
                    }
                } else {
                    if (chmin(dist[ni][nj][1], dist[i][j][1] + 1)) {
                        q.emplace(ni, nj, 1);
                    }
                }
            }
        }
    }
    if (dist[gi][gj][0] == LLONG_MAX && dist[gi][gj][1] == LLONG_MAX) {
        cout << -1 << "\n";
    } else {
        cout << min(dist[gi][gj][0], dist[gi][gj][1]) << "\n";
    }
    return 0;
}