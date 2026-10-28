// なんとなく...

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

    int n, q;
    cin >> n >> q;
    
    vector<int> p(n), r(n);
    rep(i, n) {
        cin >> p[i];
        p[i]--;
        r[p[i]] = i;
    }
    
    while (q--) {
        int op;
        cin >> op;

        if (op == 1) {
            int x, y;
            cin >> x >> y;
            x--; y--;

            swap(r[p[x]], r[p[y]]);
            swap(p[x], p[y]);
        } else {
            swap(p, r);
        }
    }

    rep(i, n) {
        cout << p[i] + 1 << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}

/// - 何ごとの話にすると見やすい？ 何だけ持てばいい？
///
/// - それについて、何が分かれば答えになる？
///
/// - 何を捨ててよく、なぜそれで足りる？ 何が効く / 何が禁止？
///
/// - その情報をどう更新 / 判定 / 集計すれば実装できる？
///


/*
クエリ2が来るたび、数列Pの i = 1...n のすべてについて見ることはできない
クエリ1で変化するのは高々2つ

数列Pについて、1, 2, 3, ... nは今何番目にいる？を管理

数列Pと、各値が何番目にあるかを管理する数列R（逆順列）を持つ
クエリ1では、数列Pについてxとyの数値を、数列RについてP[x]とP[y]の数値の場所を更新
クエリ2では、数列Pと数列Rをswapする
    逆順列の逆順列は元の数列と一致する（Pの逆順列はR、Rの逆順列はP）
*/