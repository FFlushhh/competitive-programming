#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> row(m), col(m);
    rep(i, m) {
        int r, c;
        cin >> r >> c;
        r--; c--;
        row[i] = r;
        col[i] = c;
    }
    reverse(all(row));
    reverse(all(col));
    ll ans = 0;
    vector<bool> okr(n), okc(n);
    rep(i, m) {
        if (!okr[row[i]] && !okc[col[i]]) ++ans;
        okr[row[i]] = true;
        okc[col[i]] = true;
    }
    cout << ans << endl;
    return 0;
}