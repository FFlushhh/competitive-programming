#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    string t;
    cin >> n >> t;

    // a[i] = 1 if t[i] == '0', else 0
    // 「0の個数の偶奇」を求めるため、0を1としてカウントし、1は0として扱う
    vector<int> a(n);
    rep(i, n) a[i] = (t[i] == '0');

    // sum[i] = 先頭から i 文字までの「0 の個数の偶奇」
    // 0 の個数が偶数 → sum[i] = 0
    // 0 の個数が奇数 → sum[i] = 1
    vector<int> sum(n + 1);
    rep(i, n) {
        sum[i + 1] = sum[i] + a[i];
        sum[i + 1] %= 2;  // 偶奇だけ残す
    }

    // cnt[0] = 偶数偶奇のprefixの個数
    // cnt[1] = 奇数偶奇のprefixの個数
    // prefix偶奇が同じ2点を選ぶと、その間の部分文字列の0の個数は偶数になる
    vector<int> cnt(2);
    rep(i, n + 1) cnt[sum[i]]++;

    // 部分文字列の偶奇が一致する組み合わせを数える
    // cnt[i]個から2つ選ぶ組み合わせ数 = cnt[i]C2
    ll ans = 0;
    rep(i, 2) ans += (ll)cnt[i] * (cnt[i] - 1) / 2;

    // 出力
    cout << ans << endl;
    return 0;
}
