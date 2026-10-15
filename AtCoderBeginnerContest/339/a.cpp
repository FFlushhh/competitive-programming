#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    string ans = "";
    cin >> s;
    for (int i = s.size() - 1; i >= 0; --i) {
        if (s[i] == '.') break;
        ans += s[i];
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}