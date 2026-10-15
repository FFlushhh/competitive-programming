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
    bool ok = true;
    int posB = -1;
    bool now = false;
    rep (i, 8) {
        if (s[i] == 'R') {
            now = !now;
        }
        if (s[i] == 'K') {
            if (!now) ok = false;
        }
        if (s[i] == 'B') {
            if (posB == -1) posB = i;
            else {
                if (abs(i - posB) % 2 != 1) {
                    ok = false;
                }
            }
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}