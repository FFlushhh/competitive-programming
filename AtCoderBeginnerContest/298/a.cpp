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
    cin >> n;
    string s;
    cin >> s;
    bool ok = false;
    rep (i, n) {
        if (s[i] == 'x') {
            cout << "No" << endl;
            return 0;
        }
        if (s[i] == 'o') {
            ok = true;
        }
    }
    cout << (ok ? "Yes" : "No") << endl;
    return 0;
}