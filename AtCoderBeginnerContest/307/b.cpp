#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<string> v(n);
    rep (i, n) cin >> v[i];
    rep (i, n) rep (j, n) {
        if (i == j) continue;
        string s = v[i] + v[j];
        for (int k = 0; k < s.size() / 2; ++k) {
            if (s[k] != s[s.size() - k - 1]) break;
            if (k == s.size() / 2 - 1) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}