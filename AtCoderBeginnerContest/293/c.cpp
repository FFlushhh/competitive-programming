#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int di[2] = {1, 0};
int dj[2] = {0, 1};

int h, w;
vector<vector<int> > a;
int ans = 0;

void dfs(int i, int j, set<int>& s) {
    if (s.count(a[i][j])) return;  // 同じ数字があるのでダメ

    s.insert(a[i][j]);             // 状態を更新

    if (i == h - 1 && j == w - 1) {
        ans++;                     // ゴール到達、条件クリア
    } else {
        if (i + 1 < h) dfs(i + 1, j, s);
        if (j + 1 < w) dfs(i, j + 1, s);
    }

    s.erase(a[i][j]);              // 🔁 バックトラック（状態を元に戻す）
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    

    cin >> h >> w;
    a.resize(h, vector<int>(w));
    rep(i, h) {
        rep(j, w) {
            cin >> a[i][j];
        }
    }
    set<int> s;  // 状態を管理するセット
    dfs(0, 0, s);  // スタート地点から探索開始
    cout << ans << endl;
    return 0;
}