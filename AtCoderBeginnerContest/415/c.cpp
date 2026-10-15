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
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        string s;
        cin >> n >> s;

        int full = (1 << n) - 1; // 全ての薬品が入った状態を表すビットマスク
        vector<bool> safe(full + 1, false); // safe[s]は状態sが安全かどうか
        safe[0] = true;

        for (int i = 1; i <= full; ++i) {
            safe[i] = (s[i - 1] == '0'); // 0なら安全、1なら危険
        }

        vector<bool> dp(full + 1, false); // dp[s]は状態sに到達可能かどうか
        dp[0] = true;
        for (int s = 0; s <= full; ++s) {
            if (!dp[s]) continue; // 状態sに到達できない場合はスキップ
            for (int i = 0; i < n; ++i) {
                if (!(s >> i & 1)) { // 薬品iがまだ入っていないなら
                    int next = s | (1 << i);    // 薬品iを入れた状態nextを作る
                    if (safe[next]) {           // 状態nextが安全なら
                        dp[next] = true;        // 状態nextに到達可能
                    }
                }
            }
        }

        cout << (dp[full] ? "Yes" : "No") << endl; // 全ての状態に到達可能かどうかを出力
    }
    return 0;
}