#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> s(8);
    rep(i, 8) cin >> s[i];
    rep (i, 8) {
        if ((i != 7 && s[i] > s[i + 1]) || (s[i] < 100 || s[i] > 675) || s[i] % 25 != 0) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}