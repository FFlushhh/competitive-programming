// 解説見た

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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<vector<pair<int, int>>> g(n); // (隣接頂点, 辺番号)
    rep(i, n - 1) {
        int a, b;
        cin >> a >> b;
        a--; b--;

        g[a].emplace_back(b, i);
        g[b].emplace_back(a, i);
    }

    /*
    木を頂点0を根とする根付き木にする

    parent[v] = vの親
    parentEdge[v] = 親とvを結ぶ辺番号
    order = 親が子より先に現れる順序
    */
    vector<int> parent(n, -1);
    vector<int> parentEdge(n, -1);
    vector<int> order;

    order.emplace_back(0);

    for (int i = 0; i < n; ++i) {
        int v = order[i];

        for (auto [to, edge] : g[v]) {
            if (to == parent[v]) continue;

            parent[to] = v;
            parentEdge[to] = edge;
            order.emplace_back(to);
        }
    }

    /*
    subtreeSize[v] = vを根とする部分木の頂点数

    子から親へと集計したいので、orderを逆順に処理する
    */
    vector<int> subtreeSize(n, 1);
    for (int i = n - 1; i >= 1; --i) {
        int v = order[i];
        subtreeSize[parent[v]] += subtreeSize[v];
    }

    /*
    各辺iについて、
    まず全頂点にi加えたと考える
    */
    ll base = 1LL * n * (n - 1) / 2;

    /*
    add[v] = vの部分木全体へ加える補正値
    */
    vector<ll> add(n, 0);

    /*
    全頂点共通の補正値
        「部分木の補集合に-i」したいとき、
        全頂点に-i
        +
        部分木に+i
        と分解するために使用
    */
    ll globalAdjustment = 0;

    for (int v = 1; v < n; ++v) {
        int edge = parentEdge[v]; // 親 -> v へと向かう辺
        ll edgeVal = edge + 1LL;  // 1-index

        int subtree = subtreeSize[v];
        int outside = n - subtree;

        if (subtree < outside) {
            /*
            小さい側がvの部分木

            最初に全頂点へedgeValを足したことにしているので、
            この部分木からedgeValを引く
            */
            add[v] -= edgeVal;
        } else {
            /*
            小さい側がvの部分木の外側

            外側だけに-edgeValするため、
            全頂点に-edgeVal と vの部分木に+edgeVal
            とする
            */
            globalAdjustment -= edgeVal;
            add[v] += edgeVal;
        }
    }

    /*
    rootから各頂点へaddを累積する

    accmulated[v] = vに適用されるすべての部分木更新の合計
    */
    vector<ll> accumulated(n, 0);
    vector<ll> ans(n);

    for (int v : order) {
        if (v == 0) {
            accumulated[v] = add[v];
        } else {
            accumulated[v] = accumulated[parent[v]] + add[v];
        }

        ans[v] = base + globalAdjustment + accumulated[v];
    }

    for (int i = 0; i < n; ++i) {
        cout << ans[i] << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}

/*
木は、どのノードでも根（一番上のノード）にできる

辺を切ったときの2成分を毎回実際に求めるのは重い。
木を根付き木にすれば、辺を切った2成分は「子の部分木」と「その補集合」になる。
大きい側への加算は扱いづらいので、「全体に加算して小さい側から引く」と逆転する。
全辺についての全体加算は 1+...+(N-1) としてまとめられる。
残る操作は「部分木から引く」または「部分木の補集合から引く」。
部分木更新は木上いもす、補集合更新は「全体更新＋部分木で打ち消す」で処理する。
*/