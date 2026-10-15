#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    vector<ll> imos(n);
    while (m--) {
        int l, r;
        cin >> l >> r;
        --l;
        --r;
        imos[l]++;
        if (r + 1 < n) imos[r + 1]--;
    }
    rep1(i, n - 1) imos[i] += imos[i - 1];
    string ans;
    rep(i, n) {
        if (imos[i] % 2 == 0) ans += s[i];
        else ans += t[i];
    }
    cout << ans << endl;
    return 0;
}