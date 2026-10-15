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
    vector<bool> b((int)s.size(), false);
    rep (i, s.size()) {
        if (i == 0) continue;
        if ((s[i] == ')' && s[i - 1] == '(') || (s[i] == ']' && s[i - 1] == '[') || (s[i] == '>' && s[i - 1] == '<')) {
            b[i] = true;
            b[i - 1] = true;
            int l = i - 2, r = i + 1;
            while (l >= 0 && r < (int)s.size()) {
                if ((s[l] == '(' && s[r] == ')') || (s[l] == '[' && s[r] == ']') || (s[l] == '<' && s[r] == '>')) {
                    b[l] = true;
                    b[r] = true;
                    --l;
                    ++r;
                }
                else {
                    i = r - 1;
                    break;
                }
            }
        }
    }
    rep (i, b.size()) {
        if (!b[i]) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}