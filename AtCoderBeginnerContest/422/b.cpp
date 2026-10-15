#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int di[] = {-1, 0, 1, 0};
int dj[] = {0, 1, 0, -1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w;
    cin >> h >> w;
    vector<string> s(h);
    bool ok = true;
    rep(i, h) cin >> s[i];
    rep(i, h) {
        rep(j, w) {
            if (s[i][j] == '#') {
                int cnt = 0;
                rep(d, 4) {
                    int ni = i + di[d];
                    int nj = j + dj[d];
                    if (0 <= ni && ni < h && 0 <= nj && nj < w && s[ni][nj] == '#') {
                        cnt++;
                    }
                }
                if (!(cnt == 2 || cnt == 4)) {
                    cout << "No\n";
                    return 0;
                }
            }
        }
    }
    cout << "Yes\n";
    return 0;
}