#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int h, w, n;
    cin >> h >> w >> n;
    vector<vector<int> > a(h, vector<int>(w));
    rep(i, h) rep(j, w) cin >> a[i][j];
    set<int> b;
    rep(i, n) {
        int c;
        cin >> c;
        b.emplace(c);
    }
    vector<int> c(h);
    rep(i, h) {
        int cnt = 0;
        rep(j, w) {
            if (b.count(a[i][j])) cnt++;
        }
        c[i] = cnt;
    }
    int ans = 0;
    rep(i, h) ans = max(ans, c[i]);
    cout << ans << endl;
    return 0;
}