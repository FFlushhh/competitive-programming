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
    
    string s;
    cin >> s;
    long double ans = 0;
    rep(i, s.size()) {
        if (s[i] == 't') {
            for (int j = i + 1; j < s.size(); ++j) {
                if (s[j] == 't') {
                    string t = s.substr(i, j - i + 1);
                    if (t.size() < 3) continue;
                    int cnt = 0;
                    rep(k, t.size()) {
                        if (t[k] == 't') cnt++;
                        long double cur = ((long double)cnt - 2) / ((long double)(t.size() - 2));
                        ans = max(ans, cur);
                    }
                }
            }
        }
    }
    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}