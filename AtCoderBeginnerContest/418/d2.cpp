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
    string s;
    cin >> n >> s; // 文字列長nと、0/1からなる文字列sを入力

    ll ans = 0; // 最終的な答え（部分文字列の個数）
    
    // cnt[0] = 「現在の偶奇が0のprefixの個数」
    // cnt[1] = 「現在の偶奇が1のprefixの個数」
    vector<int> cnt(2);

    rep(i, n) {
        // s[i]が '0' の場合は偶奇が反転する（0→1、1→0）
        if (s[i] == '0') swap(cnt[0], cnt[1]);

        // s[i] - '0' が 0 or 1 を表すので、その偶奇のprefix数を増やす
        cnt[s[i] - '0']++;

        // 「偶奇が1で終わるprefix」を選ぶと、その位置までの部分文字列で美しい条件を満たせる
        // よって、今の時点の cnt[1] を答えに加える
        ans += cnt[1];
    }

    cout << ans << endl; // 最終的な答えを出力
    return 0;
}
