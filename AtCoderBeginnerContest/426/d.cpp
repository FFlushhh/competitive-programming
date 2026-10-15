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
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string sl = s.substr(0, s.size() / 2);
        string sr = s.substr(s.size() / 2);

        ll ans = LLONG_MAX;
        ll ans0 = 0, ans1 = 0;
        reverse(sr.begin(), sr.end());
        ll cnt = 0;

        // ぜんぶ0
        rep(i, sl.size()) {
            if (s[i] == '1') {
                ans0++;
                ans0 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        cnt = 0;
        rep(i, sr.size()) {
            if (s[i] == '1') {
                ans0++;
                ans0 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        ans = min(ans, ans0);
        
        // ぜんぶ1
        cnt = 0;
        rep(i, sl.size()) {
            if (s[i] == '0') {
                ans1++;
                ans1 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        cnt = 0;
        rep(i, sr.size()) {
            if (s[i] == '0') {
                ans1++;
                ans1 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        ans = min(ans, ans1);

        if (n % 2 == 0) {
            cout << ans << endl;
            continue;
        }

        sl = s.substr(0, s.size() / 2 + 1);
        sr = s.substr(s.size() / 2 + 1);
        reverse(sr.begin(), sr.end());
        cnt = 0;
        ans0 = 0;
        ans1 = 0;

        // ぜんぶ0
        rep(i, sl.size()) {
            if (s[i] == '1') {
                ans0++;
                ans0 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        cnt = 0;
        rep(i, sr.size()) {
            if (s[i] == '1') {
                ans0++;
                ans0 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        ans = min(ans, ans0);
        
        // ぜんぶ1
        cnt = 0;
        rep(i, sl.size()) {
            if (s[i] == '0') {
                ans1++;
                ans1 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        cnt = 0;
        rep(i, sr.size()) {
            if (s[i] == '0') {
                ans1++;
                ans1 += cnt * 2;
                cnt = 0;
            } else {
                cnt++;
            }
        }
        ans = min(ans, ans1);
        cout << ans << endl;
    }
    return 0;
}