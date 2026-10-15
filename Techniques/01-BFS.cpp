// AtCoder Beginner Contest 400 - D
// 01-BFS
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep (i, h) cin >> s[i];
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    --a, --b, --c, --d;

    deque<pair<int, int> > deq;
    vector<vector<int> > dist(h, vector<int>(w, INT_MAX));
    vector<vector<bool> > visited(h, vector<bool>(w, false));

    dist[a][b] = 0;
    deq.emplace_back(a, b);

    while (!deq.empty()) {
        auto [i, j] = deq.front();
        deq.pop_front();

        if (visited[i][j]) continue;
        visited[i][j] = true;
        int d = dist[i][j];

        rep (k, 4) {
            int ni = i + di[k];
            int nj = j + dj[k];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s[ni][nj] == '.') {
                if (dist[ni][nj] > d) {
                    dist[ni][nj] = d;
                    deq.emplace_front(ni, nj);
                }
            }
        }

        rep (k, 4) {
            int ni = i;
            int nj = j;
            rep (l, 2) {
                ni += di[k];
                nj += dj[k];
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) break;
                if (s[ni][nj] == '#') {
                    if (dist[ni][nj] > d + 1) {
                        dist[ni][nj] = d + 1;
                        deq.emplace_back(ni, nj);
                    }
                }
            }
        }
    }
    cout << dist[c][d] << endl;
    return 0;
}