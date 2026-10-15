// https://atcoder.jp/contests/practice2/tasks/practice2_b

#include <bits/stdc++.h>
#include <atcoder/fenwicktree>
using namespace std;
using namespace atcoder;
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    // BIT（Fenwick Tree）を使用して、区間和を効率的に求める。
    // fenwick_treeは0-indexedであることに注意。
    fenwick_tree<ll> bit(n);
    rep(i, n) {
        ll a;
        cin >> a;
        bit.add(i, a); // i番目にaを加算
    }

    while (q--) {
        int opr;
        cin >> opr;
        if (opr == 0) {
            int p;
            ll x;
            cin >> p >> x;
            bit.add(p, x); // p番目にxを加算
        } else {
            int l, r;
            cin >> l >> r;
            cout << bit.sum(l, r) << endl; // [l, r)の区間和を出力
        }
    }
    return 0;
}

/*
Fenwick Tree（BIT）は、区間和や区間更新などのクエリを効率的に処理するデータ構造です。
このコードでは、Fenwick Treeを使用して、以下の操作を行っています：
1. 初期化：n個の要素を持つFenwick Treeを作成し、初期値を加算します。
2. 更新：指定された位置pに値xを加算します。
3. クエリ：指定された区間[l, r)の和を求めます。
Fenwick Treeは、更新とクエリの両方がO(log n)の時間で処理できるため、大規模なデータセットに対しても効率的に動作します。

操作方法：
bit.add(p, x)は、p番目の要素にxを加算します。
bit.sum(l, r)は、区間[l, r)の和を返します。
bit.sum(r)は、区間[0, r)の和を返します。

セグメント木との違い：
- Fenwick Treeは、区間和や区間更新などのクエリを効率的に処理するためのデータ構造であり、
　セグメント木は、より一般的な区間クエリ（最小値、最大値、GCDなど）を処理するためのデータ構造です。
- Fenwick Treeは、更新とクエリの両方がO(log n)の時間で処理できるため、セグメント木よりも実装が簡単で高速な場合があります。
　ただし、Fenwick Treeは、特定のクエリタイプに対してのみ効率的であり、セグメント木は、より一般的なクエリタイプに対しても効率的に処理できます。  

遅延セグメント木との違い：
- 遅延セグメント木は、区間更新を効率的に処理するためのデータ構造であり、
　Fenwick Treeは、区間和や区間更新などのクエリを効率的に処理するためのデータ構造です。
*/