#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    int ans = s.size();
    reverse(s.begin(), s.end());
    rep (i, s.size() - 1) {
        int small = s[i] - '0';
        int big = s[i + 1] - '0';
        ans += ((big - small + 10) % 10) - big;
        ans += small;
    }
    ans += s.back() - '0';
    cout << ans << endl;
    return 0;
}