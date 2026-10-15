#include <bits/stdc++.h>
#include <atcoder/segtree>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

// ABC405-Fを参考に
// potato167さんのコードを参考に

int op(int a, int b){
    return a + b;
}
int e(){
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    atcoder::segtree<int, op, e> seg(n);
    while (q--) {
        int a, b;
        cin >> a >> b;
        --a;
        --b;
        // https://github-wiki-see.page/m/shakayami/ACL-for-python/wiki/segtree
        if (seg.prod(a, b + 1) == 0) {
            cout << "Yes" << '\n';
            seg.set(a, 1);
            seg.set(b, 1);
        } else {
            cout << "No" << '\n';
        }
    }
    return 0;
}

/*
ABC424
ABC3完1ペナ
C BFS、ABC266-Cを思い出してアイデアが速攻浮かんだ、aとbを結んでて1ペナ
F ABC405-Fっぽさを感じてセグ木を学ぶところからスタート、普通に分からん
*/