#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int q;
    string s, t;
    cin >> q >> s >> t;

    int n = s.size(), m = t.size();
    vector<int> ok(n);

    int idx = 0;
    while (idx < n) {
        if (idx + m <= n && s.substr(idx, m) == t) {
            ok[idx] = 1;
            ok[idx + m - 1] = 1;
            idx += m;
        }
        else idx++;
    }

    vector<int> sum(n + 1);
    rep(i, n) sum[i + 1] += sum[i] + ok[i];

    // rep(i, n) {
    //     cout << ok[i] << " ";
    // }
    // cout << endl;
    // rep(i, n + 1) {
    //     cout << sum[i] << " ";
    // }
    // cout << endl;
    while (q--) {
        int l, r;
        cin >> l >> r;

        if (sum[l] + 2 <= sum[r]) Yes;
        else No;
    }
    return 0;
}