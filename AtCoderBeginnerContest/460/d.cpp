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

// constexpr int di[] = {1, 0, -1, 0};
// constexpr int dj[] = {0, 1, 0, -1};
constexpr int di[] = {1, 1, 0, -1, -1, -1, 0, 1};
constexpr int dj[] = {0, 1, 1, 1, 0, -1, -1, -1};
// type: [ int ]
constexpr int INF = 1073741823;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    vector<vector<int> > dist(h, vector<int>(w, INF));
    
    queue<pair<int, int> > q;
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#') continue;
            bool adjacentBlack = false;
            rep(d, 8) {
                int ni = i + di[d], nj = j + dj[d];
                if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
                if (s[ni][nj] == '#') adjacentBlack = true;
            }
            if (adjacentBlack) {
                dist[i][j] = 0;
                q.emplace(i, j);
            }
        }
    }

    if (q.empty()) {
        rep(i, h) {
            rep(j, w) {
                cout << ".";
            } 
            cout << endl;
        }
        return 0;
    }

    while (!q.empty()) {
        auto [i, j] = q.front();
        q.pop();
        rep(d, 8) {
            int ni = i + di[d], nj = j + dj[d];
            if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
            if (dist[i][j] + 1 >= dist[ni][nj]) continue;
            dist[ni][nj] = dist[i][j] + 1;
            q.emplace(ni, nj);
        }
    }

    rep(i, h) {
        rep(j, w) {
            if (dist[i][j] % 2 == 1) cout << '#';
            else cout << '.';
        }
        cout << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// using ll = long long;
// using ull = unsigned long long;
// #define rep(i, n) for (int i = 0; i < (int)(n); ++i)
// #define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
// #define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
// #define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
// #define all(v) v.begin(), v.end()
// #define rall(v) v.rbegin(), v.rend()
// #define Yes cout << "Yes" << endl
// #define No cout << "No" << endl

// // constexpr int di[] = {1, 0, -1, 0};
// // constexpr int dj[] = {0, 1, 0, -1};
// constexpr int di[] = {1, 1, 0, -1, -1, -1, 0, 1};
// constexpr int dj[] = {0, 1, 1, 1, 0, -1, -1, -1};
// // type: [ int ]
// constexpr int INF = 1073741823;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int h, w;
//     cin >> h >> w;
//     vector<string> s(h);
//     rep(i, h) cin >> s[i];

//     vector<vector<int> > dist(h, vector<int>(w, INF));
    
//     bool ok1 = false, ok2 = false;

//     queue<pair<int, int> > q;
//     rep(i, h) {
//         rep(j, w) {
//             if (s[i][j] == '#') {
//                 q.emplace(i, j);
//                 dist[i][j] = 0;
//             }
//             if (s[i][j] == '#') ok1 = true;
//             else ok2 = true;
//         }
//     }

//     if (!ok1 || !ok2) {
//         rep(i, h) {
//             rep(j, w) {
//                 cout << ".";
//             } 
//             cout << endl;
//         }
//         return 0;
//     }
//     while (!q.empty()) {
//         auto [i, j] = q.front();
//         q.pop();
//         rep(d, 8) {
//             int ni = i + di[d], nj = j + dj[d];
//             if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
//             if (dist[i][j] + 1 >= dist[ni][nj]) continue;
//             dist[ni][nj] = dist[i][j] + 1;
//             q.emplace(ni, nj);
//         }
//     }

//     rep(i, h) {
//         rep(j, w) {
//             if (dist[i][j] % 2 == 0) cout << '#';
//             else cout << '.';
//         }
//         cout << endl;
//     }
//     return 0;
// }