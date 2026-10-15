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
    int n = s.size();
    if (n <= 3) cout << s << endl;
    else {
        int idx = n - 3 - 1;
        string ans = "";
        reverse(s.begin(), s.end());
        rep (i, n) {
            if (i <= idx) ans += "0";
            else ans += s[i];
        }
        reverse(ans.begin(), ans.end());
        cout << ans << endl;
    }
    return 0;
}