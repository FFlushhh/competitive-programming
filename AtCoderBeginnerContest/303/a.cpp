#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s, t;
    cin >> n >> s >> t;
    rep (i, n) {
        if ((s[i] == '1' && t[i] == 'l') || (s[i] == 'l' && t[i] == '1') || (s[i] == '0' && t[i] == 'o') || (s[i] == 'o' && t[i] == '0') || (s[i] == t[i])) {
            continue;
        }
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}