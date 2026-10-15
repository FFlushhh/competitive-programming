#include <bits/stdc++.h>
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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    
    vector<vector<int> > len(11); // len[digit] = digit桁の数のリスト
    rep(i, n) {
        int digits = to_string(a[i]).size();
        len[digits].emplace_back(a[i]);
    }

    ll ans = 0;
    ll pow10 = 1;

    rep(digit, 11) {
        unordered_map<int, int> cnt; // cnt[mod_val] = mod_valを持つ数の個数
        for (int x : len[digit]) {
            int mod_val = x % m;
            cnt[mod_val]++; // mod_valを持つ数の個数をカウント
        }
        rep(i, n) {
            ll target = (-pow10 * a[i] % m) % m; // -Ai * 10^(digit) mod m
            if (target < 0) target += m; // 負の値を正の値に変換
            ans += cnt[target]; // targetを持つ数の個数をansに加算
        }
        pow10 = (pow10 * 10) % m; // 次の桁数に対する10の累乗を更新
    }
    cout << ans << endl;
    return 0; 
}

/*
1 <= i, j <= N
iとjを全探索は間に合わない
=> iを固定して、jを高速化
すなわち、Aiを固定 -> Ajは何個？

連結した正整数は、Ai * 10^(Ajの桁数) + Aj
ここで、(Ajの桁数)は高々10
=> (Ajの桁数)ごとに、適切なAjを調べる

Ai * 10^(Ajの桁数) + Aj ≡ 0 (mod M)
Aj ≡ -Ai * 10^(Ajの桁数) (mod M)
=> これをmapで管理
*/