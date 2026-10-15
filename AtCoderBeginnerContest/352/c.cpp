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
    vector<tuple<int, int, int> > ab(n);
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        ab[i] = make_tuple(b - a, a, b);
    }
    sort(ab.begin(), ab.end());
    ll ans = 0;
    rep (i, n) {
        if (i < n - 1) {
            ans += get<1>(ab[i]);
        } else {
            ans += get<2>(ab[i]);
        }
    }
    cout << ans << endl;
    return 0;
}