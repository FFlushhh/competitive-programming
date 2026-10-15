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
    rep (i, s.size()) {
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
            cout << "_" << s[i];
            continue;
        }
        cout << s[i];
    }
    return 0;
}