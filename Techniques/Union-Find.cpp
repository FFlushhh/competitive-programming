#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

class UnionFind
{
    public:
    int par[100009];
    int siz[100009];

    // N頂点のUnion-Find木を作成
    UnionFind(int n)
    {
        for (int i = 1; i <= n; ++i) {
            par[i] = -1;    // 最初は親がない
            siz[i] = 1;     // 最初はグループの頂点数が1
        }
    }

    // 頂点xの根を返す関数
    int root(int x) {   
        // 1個先（親）が無ければ根、あればその親に進む
        while (par[x] != -1) x = par[x];
        return x;
    }

    // 要素uと要素vを結合する関数
    // どちらかの根をもう片方の根にくっつける
    void unite(int u, int v) {
        int RootU = root(u);
        int RootV = root(v);
        if (RootU == RootV) return; // uとvが同じグループなら何もしない
        // Union by size
        // 大きいグループに小さいグループをくっつける
        if (siz[RootU] < siz[RootV]) {
            par[RootU] = RootV;
            siz[RootV] += siz[RootU];
        }
        else {
            par[RootV] = RootU;
            siz[RootU] += siz[RootV];
        }
    }

    // 要素uと要素vが同じグループに属するかを判定する関数
    bool same(int u, int v) {
        return root(u) == root(v);
    }

    /*
    使い方
        UnionFind uf(n); // n頂点のUnion-Find木を作成(1-indexed)
        uf.unite(u, v); // uとvを結合する
        uf.same(u, v); // uとvが同じグループに属するかを判定する
    */
};


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    
    return 0;
}