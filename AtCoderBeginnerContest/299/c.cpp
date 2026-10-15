#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; string s;
    cin >> n >> s;
    int ans = -1;
    rep (i, n) {
        if (s[i] == '-') {
            int j = i + 1;
            while (j < n && s[j] == 'o') j++;
            int len = j - i - 1;
            if (len > 0) ans = max(ans, len);
            i = j - 1;
        }
    }
    rep (i, n) {
        if (s[i] == 'o') {
            int j = i + 1;
            while (j < n && s[j] == 'o') j++;
            if (j == n) break;
            if (j < n && s[j] == '-') {
                int len = j - i;
                if (len > 0) ans = max(ans, len);
            }
            i = j - 1;
        }
    }
    cout << ans << endl;
    return 0;
}