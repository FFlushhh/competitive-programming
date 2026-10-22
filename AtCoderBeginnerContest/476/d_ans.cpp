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

    ll n, m, k, x, y;
    cin >> n >> m >> k >> x >> y;
    vector<ll> a(n), b(m);
    rep(i, n) cin >> a[i]; 
    rep(i, m) cin >> b[i]; 

    sort(all(a));
    sort(all(b));

    vector<ll> prefix_a(n + 1), prefix_b(m + 1);
    rep(i, n) prefix_a[i + 1] = prefix_a[i] + a[i];
    rep(i, m) prefix_b[i + 1] = prefix_b[i] + b[i];

    ll need_y = 0;
    ll ans = 0;

    rep(i, m + 1) {
        // ドリンクを1つも買わない場合はスキップ
        if (i > 0) need_y += (b[i - 1] + k - 1) / k;

        if (need_y > y) break;
        if (prefix_b[i] > x + k * y) break;

        ll buy_b = i;
        ll remain = x + k * y - prefix_b[i];

        ll buy_a = upper_bound(all(prefix_a), remain) - prefix_a.begin();
        buy_a = max(0LL, buy_a - 1);

        ans = max(ans, buy_b + buy_a);
    }

    cout << ans << "\n";
    return 0;
}

/*
[私の考え1]
デザートAとドリンクBどちらも昇順ソートする
Kドル紙幣Yで買える限り、安い順にドリンクを買いつつ、おつりも貯める
残った金額でデザート買う
-> WA

[私の考え2]
ドリンクBの購入時は、買える限りでお釣りが多くなるように買う
    おつりとidxをペアで持って、おつりに関してソート

[正解の解法]
購入するドリンクの数を決め打って、そのときにデザートを何個買えるかを二分探索する
*/