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
    
    ll n, s, lim;
    cin >> n >> s >> lim;
    s--;

    vector<ll> a(n);
    rep(i, n - 1) cin >> a[i];

    vector<ll> sum(n);
    rep(i, n - 1) sum[i + 1] = sum[i] + a[i];

    ll ans = 0;
    
    // Lを固定して、Rを探索する
    for (int l = s; l >= 0; --l) {
        ll left = sum[s] - sum[l];

        for (int r = s; r < n; ++r) {
            ll right = sum[r] - sum[s];

            ll cost = left + right + min(left, right);

            if (lim < cost) break;

            ll visited = r - l + 1;

            ans = max(ans, visited);
        }
    }

    cout << ans << endl;
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
正しい考察
- 訪れた街は必ず「連続区間」となる
    どう動くか？ではなく、「左端Lと右端Rをどこにするか？」に持ち込む

- 移動方法は2通りだけ考えれば十分
    左に行ってから右に行く
        s → l → r
        移動距離：2 * left + right
    右に行ってから左に行く
        s → r → l
        移動距離：2 * right + left

    最短距離は
        min(2 * left + right, left + 2 * right)
        → left + right + min(left, right)

    なぜこれでいい？
        何度も方向転換しても、訪れられる新しい街は増えないのに移動距離だけ増える

- 街間の距離を毎回足すのも避ける
    累積話で街間の距離をO(1)で求められるようにする

- あとは[l, r]を全探索
    N <= 8000 より O(N^2)が可能
*/