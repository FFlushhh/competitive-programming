#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int dp(int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    vector<int> dp(n + 1);
    for (int i = 2; i <= n; ++i)
    {
        dp[0] = 0;
        dp[1] = 1;
        dp[i] = dp[i - 2] - dp[i - 1];
    }
    return dp[n];
}

// int dp(int n)
// {
//     vector<int> dp(n + 1);
//     dp[0] = 0;
//     dp[1] = 1;
//     for (int i = 2; i <= n; ++i) dp[i] = dp[i - 2] + dp[i - 1];
//     return dp[n];
// }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << dp(n) << endl;
    return 0;
}

/*
int dp(int n)
{
    vector<int> dp(n + 1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i <= n; ++i) dp[i] = dp[i - 2] + dp[i - 1];
    return dp[n];
}
*/