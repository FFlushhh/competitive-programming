#include <bits/stdc++.h>
#include <atcoder/modint>
using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    rep(i, n) cin >> a[i] >> b[i];

    // dp[i][j] = i番目まで選んだとき、i番目をa[i](j=0) / b[i](j=1)にした場合の通り数
    vector<vector<mint>> dp(n, vector<mint>(2));
    dp[0][0] = 1; // 最初はa[0]を選ぶ
    dp[0][1] = 1; // 最初はb[0]を選ぶ

    rep(i, n - 1) {
        rep(j, 2) {
            int J = (j == 0 ? a[i] : b[i]);       // i番目に選んだ値
            rep(k, 2) {
                int K = (k == 0 ? a[i + 1] : b[i + 1]); // i+1番目に選ぶ候補
                if (J != K) {
                    dp[i + 1][k] += dp[i][j]; // 違えば遷移可能
                }
            }
        }
    }

    // 最後にa[n-1]かb[n-1]を選んだ通り数の合計
    cout << (dp[n - 1][0] + dp[n - 1][1]).val() << endl;
    return 0;
}
