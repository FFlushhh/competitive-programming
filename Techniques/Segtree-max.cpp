#include <bits/stdc++.h>
#include <atcoder/segtree>
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

// 参考：https://qiita.com/tomoya2996/items/7d056676e95138ad93e4

// モノイド: 集合と二項演算の組み合わせで、特定の条件を満たすもの
// 1. 結合律: 二項演算は結合律を満たす必要があります。つまり、任意の要素a、b、cに対して、op(op(a, b), c) == op(a, op(b, c))が成り立ちます。
// 2. 単位元: 二項演算には単位元が存在する必要があります。つまり、任意の要素aに対して、op(a, e()) == aかつop(e(), a) == aが成り立ちます。
// 3. クローズド性: 二項演算は集合内の要素を入力として受け取り、同じ集合内の要素を出力する必要があります。
// 4. 可換性（オプション）: 二項演算が可換である場合、任意の要素a、bに対して、op(a, b) == op(b, a)が成り立ちます。

/// @brief 2つの整数の最大値を返す
/// @param a 
/// @param b 
/// @return 
int op(int a, int b)
{
    return max(a, b);
}

// 単位元
// 例：最大値の場合は最小の整数を返すように定義します。

/// @brief 空の値を返す
/// @return 
int e()
{
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    // セグメント木の初期化
    atcoder::segtree<int, op, e> seg(a);

    while (q--) {
        int t;
        cin >> t;

        if (t == 1) {
            int pos, x;
            cin >> pos >> x;
            pos--;

            // セグメント木の更新
            seg.set(pos, x);
        } else {
            int l, r;
            cin >> l >> r;
            l--;
            r--;

            // セグメント木の区間クエリ
            cout << seg.prod(l, r) << endl;
        }
    }
    return 0;
}

/*
セグメント木：
配列の区間に対するクエリを効率的に処理するためのデータ構造です。
セグメント木を使用すると、区間の最大値や最小値、合計などを高速に求めることができます。
このコードでは、セグメント木を使用して、整数の配列に対する区間の最大値を求めるクエリを処理しています。
セグメント木は、配列の要素を葉ノードに配置し、内部ノードには子ノードの値を組み合わせた結果を格納します。
これにより、区間クエリを効率的に処理できます。

使い方：
1. セグメント木の初期化：`atcoder::segtree<int, op, e> seg(a);`
    - `int`はセグメント木の要素の型を指定します。
    - `op`は2つの要素を組み合わせる関数で、ここでは最大値を返す関数を定義しています。
    - `e`は空の値を返す関数で、ここでは-1を返すように定義しています。
2. セグメント木の更新：`seg.set(pos, x);`
    - `pos`は更新する位置を指定し、`x`は新しい値を指定します。
3. セグメント木の区間クエリ：`seg.prod(l, r);`
    - `l`は区間の開始位置を指定し、`r`は区間の終了位置を指定します。
    - この関数は、区間 `[l, r)` の最大値を返します。
セグメント木は、配列の要素数が大きい場合でも高速にクエリを処理できるため、競技プログラミングなどでよく使用されます。

// 例：最大値を返す関数
int op(int a, int b)
{
    return max(a, b);
}

// 例：最小値を返す関数
int op(int a, int b)
{
    return min(a, b);
}

// 例：合計を返す関数
int op(int a, int b)
{
    return a + b;
}

// 例：積を返す関数
int op(int a, int b)
{
    return a * b;
}

// 例：論理積を返す関数
int op(int a, int b)
{
    return a & b;
}

// 例：論理和を返す関数
int op(int a, int b)
{
    return a | b;
}

// 例：XORを返す関数
int op(int a, int b)
{
    return a ^ b;
}

// 例：最大公約数を返す関数
int op(int a, int b)
{
    return gcd(a, b);
}

// 例：最小公倍数を返す関数
int op(int a, int b)
{
    return lcm(a, b);
}

// 例：文字列の連結を返す関数
string op(string a, string b)
{
    return a + b;
}

// 例：ベクトルの要素ごとの最大値を返す関数
vector<int> op(vector<int> a, vector<int> b)
{
    vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = max(a[i], b[i]);
    }
    return result;
}

// 例：ベクトルの要素ごとの最小値を返す関数
vector<int> op(vector<int> a, vector<int> b)
{
    vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = min(a[i], b[i]);
    }
    return result;
}

// 例：ベクトルの要素ごとの合計を返す関数
vector<int> op(vector<int> a, vector<int> b)
{
    vector<int> result(a.size());
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = a[i] + b[i];
    }
    return result;
}

// 例：空の値を返す関数
int e()
{
    return 0; // 合計の場合は0、積の場合は1など、適切な値を返すように定義します。
}

// 例：空の値を返す関数（最大値の場合）
int e()
{
    return INT_MIN; // 最大値の場合は最小の整数を返すように定義します。
}

// 例：空の値を返す関数（最小値の場合）
int e()
{
    return INT_MAX; // 最小値の場合は最大の整数を返すように定義します。
}

// 例：空の値を返す関数（論理積の場合）
int e()
{
    return ~0; // 論理積の場合は全てのビットが1の値を返すように定義します。
}

// 例：空の値を返す関数（論理和の場合）
int e()
{
    return 0; // 論理和の場合は全てのビットが0の値を返すように定義します。
}

// 例：空の値を返す関数（XORの場合）
int e()
{
    return 0; // XORの場合は全てのビットが0の値を返すように定義します。
}

// 例：空の値を返す関数（最大公約数の場合）
int e()
{
    return 0; // 最大公約数の場合は0を返すように定義します。
}

// 例：空の値を返す関数（最小公倍数の場合）
int e()
{
    return 1; // 最小公倍数の場合は1を返すように定義します。
}

// 例：空の値を返す関数（文字列の連結の場合）
string e()
{
    return ""; // 文字列の連結の場合は空の文字列を返すように定義します。
}

// 例：空の値を返す関数（ベクトルの要素ごとの最大値の場合）
vector<int> e()
{
    return vector<int>(size, INT_MIN); // ベクトルの要素ごとの最大値の場合は、全ての要素が最小の整数のベクトルを返すように定義します。
}

// 例：空の値を返す関数（ベクトルの要素ごとの最小値の場合）
vector<int> e()
{
    return vector<int>(size, INT_MAX); // ベクトルの要素ごとの最小値の場合は、全ての要素が最大の整数のベクトルを返すように定義します。
}

*/