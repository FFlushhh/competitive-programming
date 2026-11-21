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
    string s;
    cin >> n >> s;

    int suma = 0, sumb = 0, sumc = 0;
    rep(i, n) {
        if (s[i] == 'A') {
            suma++;
        } else if (s[i] == 'B') {
            sumb++;
        } else {
            sumc++;
        }
    }

    if (!(suma >= 3 && sumb >= 3 && sumc >= 3)) {
        cout << 0 << endl;
        return 0;
    }
    
    int l = -1, r = -1;
    int a = 0, b = 0, c = 0;
    rep(i, n) {
        if (s[i] == 'A') {
            a++;
        } else if (s[i] == 'B') {
            b++;
        } else {
            c++;
        }

        if (a > 0 && b > 0 && c > 0) {
            l = i;
            break;
        }
    }

    a = 0, b = 0, c = 0;
    rrep(i, n) {
        if (s[i] == 'A') {
            a++;
        } else if (s[i] == 'B') {
            b++;
        } else {
            c++;
        }

        if (a > 0 && b > 0 && c > 0) {
            r = i;
            break;
        }
    }

    ll ans = 0;
    int j = l + 1;
    a = 0, b = 0, c = 0;
    for (int i = l + 1; i < r; ++i) {
        if (j < i) j = i;

        while (j < r && !(a > 0 && b > 0 && c > 0)) {
            if (s[j] == 'A') {
                ++a;
            } else if (s[j] == 'B') {
                ++b;
            } else {
                ++c;
            }
            ++j;
        }

        if (j >= r && !(a > 0 && b > 0 && c > 0)) break;
        ans += r - j + 1;

        if (s[i] == 'A') {
            --a;
        } else if (s[i] == 'B') {
            --b;
        } else {
            --c;
        }
    }

    cout << ans << endl;

    // a = 0, b = 0, c = 0;
    // for (int i = l + 1; i < r; ++i) {
    //     if (s[i] == 'A') {
    //         a++;
    //     } else if (s[i] == 'B') {
    //         b++;
    //     } else {
    //         c++;
    //     }
    // }

    
    // int ca = a, cb = b, cc = c;
    // for (int i = l + 1; i < r; ++i) {
    //     ans += 1;
    //     if (s[i] == 'A') {
    //         a--;
    //     } else if (s[i] == 'B') {
    //         b--;
    //     } else {
    //         c--;
    //     }

    //     if (!(a > 0 && b > 0 && c > 0)) {
    //         break;
    //     }
    // }

    // a = ca, b = cb, c = cc;
    // for (int i = r; i >= l + 1; --i) {
    //     ans += 1;
    //     if (s[i] == 'A') {
    //         a--;
    //     } else if (s[i] == 'B') {
    //         b--;
    //     } else {
    //         c--;
    //     }

    //     if (!(a > 0 && b > 0 && c > 0)) {
    //         break;
    //     }
    // }

    // cout << a << " " << b << " " << c << " " << l << " " << r << endl;
    // vector<vector<ll>> dp(n + 1, vector<ll>(3));
    // rep(i, n) {
    //     dp[i + 1] = dp[i];
    //     if (s[i] == 'A') {
    //         dp[i + 1][0]++;
    //     } else if (s[i] == 'B') {
    //         dp[i + 1][1]++;
    //     } else {
    //         dp[i + 1][2]++;
    //     }
    // }

    // int l = -1, r = -1;
    // rep(i, n) {
    //     bool ok = true;
    //     rep(j, 3) {
    //         if (dp[i])
    //     }
    // }

    
    // rep(j, 3) {
    //     if (dp[n][j] < 3) {
    //         cout << 0 << endl;
    //         return 0;
    //     }
    // }

    // ll ans = 1;
    // rep(j, 3) ans *= dp[n][j];

    // ans /= n;
    // cout << ans << endl;
    // rep(i, n) {
    //     dp[i + 1] = dp[i];

    //     if (s[i] == 'A') {
    //         dp[i + 1][0]++;
    //     } else if (s[i] == 'B') {
    //         dp[i + 1][1] += dp[i][0];
    //     } else {
    //         dp[i + 1][2] += dp[i][1];
    //     }
    // }

    return 0;
}

/*
s[i] == 'A' から始めた時 
    ABCは何個できますか
*/