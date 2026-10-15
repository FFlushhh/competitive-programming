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
    vector<int> q(n), r(n);
    rep (i, n) cin >> q[i] >> r[i];
    int Q;
    cin >> Q;
    rep (i, Q) {
        int t, d;
        cin >> t >> d;
        int mod = d % q[t - 1];
        if (mod != r[t - 1]) {
            if (mod < r[t - 1]) {
                d += r[t - 1] - mod;
            }
            else {
                d += q[t - 1] + r[t - 1] - mod; // r[t - 1] - modは負の値なので、q[t - 1]を足すことで正の値にする
            }
        }
        cout << d << endl;
    }
    return 0;
}