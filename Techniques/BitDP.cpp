// ABC415-C - Mixture

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
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        // 問題文では、状態1から状態2^n-1までが、s[0]からs[2^n-1]に対応している
        // しかし、実装では状態番号maskをそのまま添え字にしたい
        // そのため、先頭に状態0用の'0'を追加する
        // 状態0は空の瓶で、安全として追加する
        s = '0' + s;
        
        // dp[mask] = 状態maskに到達できるならtrue
        vector<int> dp(1 << n, 0);

        // 最初は空の瓶なので、状態0にいる
        dp[0] = 1;

        for (int mask = 0; mask < (1 << n); ++mask) {
            // 到達できない状態からは遷移しない
            if (!dp[mask]) continue;

            // まだ入れていない薬品jを1つ追加する
            for (int j = 0; j < n; ++j) {
                // すでに薬品jが入っているなら追加できない
                if (mask & (1 << j)) continue;

                // 薬品jを追加した状態
                int next = mask | (1 << j);

                // nextが安全なら到達可能
                if (s[next] == '0') {
                    dp[next] = 1;
                }
            }
        }

        if (dp[(1 << n) - 1]) Yes;
        else No;
    }
    return 0;
}