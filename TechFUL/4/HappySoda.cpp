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
    map<char, int> mp;
    rep (i, n) {
        char c;
        cin >> c;
        mp[c]++;
    }
    int ans = min({mp['H'], mp['A'], mp['P'] / 2, mp['Y']});
    cout << ans << endl;
    return 0;
}