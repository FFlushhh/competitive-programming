#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

constexpr int di[] = {1, 0, -1, 0};
constexpr int dj[] = {0, 1, 0, -1};
// constexpr int di[] = {1, 1, 0, -1, -1, -1, 0, 1};
// constexpr int dj[] = {0, 1, 1, 1, 0, -1, -1, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    vector<bool> okH(h, true), okW(w, true);

    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#') {
                okH[i] = false;
                okW[j] = false;
            }
        }
    }

    // type: [ long long ]
    constexpr long long INFLL = 1LL << 60;
    
    queue<pair<int, int>> q;
    vector<vector<ll>> dist(h, vector<ll>(w, INFLL));

    rep(i, h) {
        rep(j, w) {
            if (okH[i] && okW[j]) {
                q.emplace(i, j);
                dist[i][j] = 0;
            }
        }
    }

    ll ans = 0;
    while (!q.empty()) {
        auto [i, j] = q.front();
        q.pop();

        rep(d, 4) {
            int ni = i + di[d], nj = j + dj[d];

            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (dist[ni][nj] != INFLL) continue;
            if (s[ni][nj] == '#') continue;

            int nxtD = dist[i][j] + 1;
            dist[ni][nj] = nxtD;

            if (nxtD < k) q.emplace(ni, nj);
        }
    }

    // ll ans = 0;
    rep(i, h) {
        rep(j, w) {
            // cout << dist[i][j] << " ";
            if (dist[i][j] <= k) {
                ++ans;
            }
        }
        // cout << endl;
    }
    cout << ans << endl;
    return 0;
}