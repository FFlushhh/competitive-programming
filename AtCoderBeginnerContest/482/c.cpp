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

    int h, w, n, q;
    cin >> h >> w >> n >> q;

    // h, w <= 1e9...泣
    vector<int> row(n), col(n);
    rep(i, n) {
        int r, c;
        cin >> r >> c;

        row[i] = r;
        col[i] = c;
    }

    sort(all(row));
    sort(all(col));

    while (q--) {
        int op, l, r;
        cin >> op >> l >> r;

        if (op == 1) {
            int idxr = upper_bound(all(row), r) - row.begin();
            int idxl = lower_bound(all(row), l) - row.begin();

            cout << idxr - idxl << endl;
        } else {
            int idxr = upper_bound(all(col), r) - col.begin();
            int idxl = lower_bound(all(col), l) - col.begin();

            cout << idxr - idxl << endl;
        }
    }
    
    // // vector<string> s(h, string(w, '.'));
    // vector<ll> row(h), col(w);

    // rep(i, n) {
    //     int r, c;
    //     cin >> r >> c;
    //     r--; c--;

    //     row[r]++;
    //     col[c]++;
    // }

    // vector<ll> sr(h + 1), sc(w + 1);

    // rep(i, w) {
    //     sc[i + 1] = col[i] + sc[i];
    // }

    // rep(i, h) {
    //     sr[i + 1] = row[i] + sr[i];
    // }

    // rep(_, q) {
    //     int op;
    //     cin >> op;

    //     if (op == 1) {
    //         int u, d;
    //         cin >> u >> d;

    //         // u--; d--;
    //         cout << sr[d] - sr[u - 1] << endl;
    //         // cout << sc[d] - sc[u - 1] << endl;
    //     } else {
    //         int l, r;
    //         cin >> l >> r;

    //         // l--; r--;
    //         cout << sc[r] - sc[l - 1] << endl;
    //         // cout << sr[r] - sr[l - 1] << endl;
    //     }
    // }

    return 0;
}