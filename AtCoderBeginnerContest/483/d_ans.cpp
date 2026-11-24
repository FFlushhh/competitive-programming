// 解答見た
// 解けそうで解けてない...

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

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    // plus[i] = a[i]以降の移動を座標0から開始した場合の最大到達座標
    vector<ll> plus(n + 1);

    // minus[i] = a[i]以降の移動を座標0から開始した場合の最小到達座標
    vector<ll> minus(n + 1);
    
    // どの位置から移動を始めても、残りの移動によってどこまで到達するかをO(1)で求められる
    rrep(i, n) {
        plus[i] = max(0LL, plus[i + 1] + a[i]);
        minus[i] = min(0LL, minus[i + 1] + a[i]);
    }

    // 反転しない場合で初期化
    ll ans = plus.front() - minus.front() + 1;

    // 現在座標
    ll now = 0;

    // これまでの最大・最小到達座標
    ll prefix_max = 0;
    ll prefix_min = 0;

    /*
    数列Aを
    A = { prefix | i番目（反転）| suffix }
    と見る

    i番目の符号を反転させて動かした座標を求め、
    残りの移動での最大どこまで進むか/最小どこまで進むか、を求め
    prefixでのmax/minと比較する
    */
    rep(i, n) {
        /* 反転した場合 */
        ll reversed = now - a[i];

        // 後半の相対座標を絶対座標に変換
        ll suffix_max = reversed + plus[i + 1];
        ll suffix_min = reversed + minus[i + 1];

        ll total_max = max(prefix_max, suffix_max);
        ll total_min = min(prefix_min, suffix_min);

        ans = max(ans, total_max - total_min + 1);

        // 次に進むため、通常通り移動
        now += a[i];

        // i番目は、prefixゾーンに入る
        prefix_max = max(prefix_max, now);
        prefix_min = min(prefix_min, now);
    }

    cout << ans << endl;
    return 0;
}

/*
[違った点]
間違い①：最終座標しか調べていない
間違い②：原点からの最大距離を答えとしている
    通過した整数座標の個数 = 最大座標 - 最小座標 + 1

[正解の方針]
now 反転する移動の直前の現在座標
left_max 反転する移動の直前までの最大到達座標
left_min 反転する移動の直前までの最小到達座標
plus[i + 1] 次の移動意向を座標0から開始した場合の最大到達座標
minus[i + 1] 次の移動意向を座標0から開始した場合の最小到達座標

答えを、符号反転なしでの max - min + 1 で初期化
plus[i] = max(0LL, a[i] + plus[i + 1]);
minus[i] = min(0LL, a[i] + minus[i + 1]);
で、i + 1 ... n回移動での相対的な最大・最小座用を求める

数列Aを
A = { prefix | i番目（反転）| suffix }
と見る

i番目の符号を反転させて動かした座標を求め、
残りの移動での最大どこまで進むか/最小どこまで進むか、を求め
prefixでのmax/minと比較する
そうして今回の反転でのtotal_max, total_minを求めて、答えを更新

i番目のループ終了時は、i番目はprefixゾーンに入れて、
now, prefix_max, prefix_minを更新
*/