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
    string s;
    cin >> s;
    rep (i, n - 2) {
        if (s[i] == 'A') {
            if (s[i + 1] == 'B' && s[i + 2] == 'C') {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    cout << -1 << endl;
    return 0;
}