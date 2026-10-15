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
    cin >> n;
    // rep(i, n) {
    //     string s;
    //     cin >> s;
    //     int val = s[0] - 'a';
    //     int ans = val / 3;
    //     ans += 2;
    //     if (ans == 10) ans--;
    //     cout << ans;
    // }

    rep(i, n) {
        string s;
        cin >> s;
        char c = s[0];
        if (c <= 'r') {
            int val = s[0] - 'a';
            int ans = val / 3;
            ans += 2;
            if (ans == 10) ans--;
            cout << ans;
        } else if (c == 's') {
            cout << 7;
        } else if (c <= 'v') {
            cout << 8;
        } else {
            cout << 9;
        }
        
    }
    return 0;
}