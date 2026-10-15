#include <bits/stdc++.h>
#include <atcoder/dsu>
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
    vector<vector<pair<int, int>>> g(n);
    atcoder::dsu uf(n);
    
    rep(i, n - 1) {
        int a, b;
        cin >> a >> b;
        a--; b--;
        g[a].emplace_back(b, i + 1);
        g[b].emplace_back(a, i + 1);
        uf.merge(a, b);
    }

    int root = -1;
    int cnt = 0;
    rep(i, n) {
        root = uf.leader(i);
    }

    cout << root << endl;

    rep(i, n) {

    }
    return 0;
}

/*
解法1
    各ノードに2次元表を作り、
    切った辺で結ばれていたノードのうち、ノード総数が多い方のノードについて、
    そのノードに辺番号をpush_back

    ルートを取得し、ルートからBFS
    BFS時は、通った辺番号分だけ減らしながら、答えのノード数値に値を足しながらBFSしていく

解法2
    Union-Findでなんかする

解法3
    遅延セグメント木？

*/