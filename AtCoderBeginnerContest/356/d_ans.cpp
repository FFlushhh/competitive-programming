#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using ull = unsigned long long;
using mint = atcoder::modint998244353;
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

    ll n, m;
    cin >> n >> m;
    string ms = to_string(m);

    mint ans = 0;

    for (ll i = 0; i < m; ++i) {

        // m(2)の桁でビットが1のもの
        if (m & (1 << i)) {
            mint block = (n + 1) / (i + 2);
            mint remain = (n + 1) % (i + 2);
            // cout << "i: " << i << " block: " << block.val() << " remain: " << remain.val() << endl;

            mint add = 0;
            if (block.val() % 2 == 1) add += remain;
            
            ans += (block / 2) * (i + 1) + add;
        }
    }

    cout << ans.val() << endl;

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
2^60 = 1.15 * 10^18
k = 0 ... nまで全探索は無理

2つの整数n,mのANDは、
nとmをそれぞれ2進数で表した時に、同じくらいがともに1であるときに1、そのほか0

m(2)の桁数分だけ見ればよい

m(2)の桁が0の部分は確定で0
m(2)の桁が1の部分について、
kの対応する位が1であるか0であるか

k = 0 .. nについて
2^0の位は毎回変わる
2^1の位は2回ずつ連続して変わる
2^2の位は4回ずつ連続して変わる
2^3の位は8回ずつ連続して変わる
...

つまり、m(2)の桁数分だけ見て、
    もし、m(2)[i]が1のとき、
        k = 0 ... n (2) の間で、
        1が何回ありますか、が分かればよい


2^0の位
    0-1の変化列において、1個ずつの塊が何個ありますか
2^1の位
    0-1の変化列において、2個ずつの塊が何個ありますか
2^2の位
    0-1の変化列において、4個ずつの塊が何個ありますか
*/