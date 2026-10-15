#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    string ans = "";
    int j = 0;
    rep (i, s.size()) {
        if (s[i] == 'W') {
            j = i;
            string tmp = "";
            while (j < (int)s.size() && s[j] == 'W') {
                tmp += s[j];
                ++j;
            }
            if (j < s.size()) tmp += s[j];
            if (j < s.size() && s[j] == 'A') {
                ans += 'A';
                rep (k, tmp.size() - 1) ans += 'C';
            }
            else ans += tmp;
            i = j;
        }
        else ans += s[i];
    }
    cout << ans << endl;
    return 0;
}