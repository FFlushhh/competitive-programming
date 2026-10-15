#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int di[] = {1, 0, -1, 0};
int dj[] = {0, 1, 0, -1};
const string str = "^<v>";

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep (i, h) cin >> s[i];
    queue<pair<int, int> > q;
    vector<vector<int> > dist(h, vector<int>(w, -1));
    rep (i, h) {
        rep (j, w) {
            if (s[i][j] == 'E') {
                dist[i][j] = 0;
                q.emplace(i, j);
            }
        }
    }
    while (!q.empty()) {
        auto [i, j] = q.front(); q.pop();
        rep (k, 4) {
            int ni = i + di[k];
            int nj = j + dj[k];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (s[ni][nj] != '.') continue;
            s[ni][nj] = str[k];
            q.emplace(ni, nj);
        }
    }
    rep (i, h) cout << s[i] << endl;
    return 0;
}