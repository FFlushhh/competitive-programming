#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n;
    vector<string> f(n);
    rep (i, n) cin >> f[i];
    cin >> m;
    if (m == 0) {
        cout << "YES" << endl;
        return 0;
    }
    rep (i, m) {
        bool flag = false;
        string s;
        cin >> s;
        rep (j, n) {
            if (f[j] == s) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}