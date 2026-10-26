// 解説見た
// もう一歩...

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

    // k = 0, 1, ... nなので、対象は n + 1 個
    ll total = n + 1;

    mint ans = 0;

    // n, m < 2 ^ 60なので、調べるビットは0~59のみ
    for (int i = 0; i < 60; ++i) {

        if (((m >> i) & 1LL) == 0) continue;

        /*
        i番目のビットは、
        2^i個の0 -> 2^i個の1
        を繰り返す

        そのうち1になっている個数は
        2^i

        完全な周期と、最後の余り、に分ける

        完全な周期は、(n + 1) / 周期
        あまりは、(n + 1) % 周期

        周期は、0がhalf個 -> 1がhalf個 を繰り返すので、
        max(0, 余り - half)を答えに加算する
        */
        
        // 0がhalf個、1がhalf個、というパターンを繰り返す
        ll half = 1LL << i;     // 周期の半分（パターン分）
        ll period = half * 2;   // 完全な周期

        ll full_cycles = total / period;
        ll remainder = total % period;

        // 完全な各周期には1がhalf個含まれる
        ll ones = full_cycles * half;

        // 余った部分は、最初のhalf個が0
        // halfを超えた分だけ1が登場する
        ones += max(0LL, remainder - half);

        ans += ones;

        // // m(2)の桁でビットが1のもの
        // if (m & (1 << i)) {
        //     mint block = (n + 1) / (i + 2);
        //     mint remain = (n + 1) % (i + 2);
        //     // cout << "i: " << i << " block: " << block.val() << " remain: " << remain.val() << endl;

        //     mint add = 0;
        //     if (block.val() % 2 == 1) add += remain;
            
        //     ans += (block / 2) * (i + 1) + add;
        // }
    }

    cout << ans.val() << endl;

    return 0;
}

/// - 何ごとの話にすると見やすい？ 何だけ持てばいい？
///     kごとではなく、ビット位置ごとに考える。必要なのは各ビットが0〜Nの中で1になる回数だけ
/// - それについて、何が分かれば答えになる？
///     Mの1ビットが立っている各位置について、kの対応ビットが1になる個数を足せばよい
/// - 何を捨ててよく、なぜそれで足りる？ 何が効く / 何が禁止？
///     kそのものを列挙する必要はない。ビットの値には 0が2ⁱ個、1が2ⁱ個という周期性があるので、出現回数を一括計算できる
/// - その情報をどう更新 / 判定 / 集計すれば実装できる？
///     各ビットについて、完全な周期の1の数 + 余りに含まれる1の数 を計算する。Mの対応ビットが1の場合だけ答えに加算する


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