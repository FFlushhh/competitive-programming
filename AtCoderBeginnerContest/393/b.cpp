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
    ll ans = 0;
    int n = s.size();
    rep (i, n) {
        if (s[i] == 'A') {
            for (int j = i + 1; j < n; ++j) {
                if (s[j] == 'B') {
                    int diff = j - i;
                    if (s[diff + j] == 'C') {
                        ++ans;
                    }
                }
            } 
        }
    }
    cout << ans << endl;
    return 0;
}