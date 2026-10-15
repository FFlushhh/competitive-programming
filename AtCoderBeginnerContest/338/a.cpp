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
        if (i == 0 && s[i] >= 'A' && s[i] <= 'Z') continue;
        else if (i >= 1 && s[i] >= 'a' && s[i] <= 'z') continue;
        else {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}