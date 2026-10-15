#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int n, m;
vector<vector<pair<ll, ll>>> G;
vector<ll> sum;
ll ans = 2e18;

void dfs(int v, int len, int p = -1)
{

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m;
    G.resize(m + 1);
    rep (i, m) {
        ll u, v, w;
        cin >> u >> v >> w;
        if (v > u) swap(u, v);
        bitset<64> bs(w);
        G[u].emplace_back(v, bs.count());
    }

    cout << ans << endl;
    return 0;
}

/*
ABC396
ABC3完1ペナ

Bで問題文読み飛ばして時間ロス
Cで尺取りの範囲制限を書き忘れ1ペナ
*/