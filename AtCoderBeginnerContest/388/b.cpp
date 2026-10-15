#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, d;
    cin >> n >> d;
    vector<int> t(n), l(n);
    rep (i, n) {
        cin >> t[i] >> l[i];
    }
    rep (i, d) {
        int m = 0;
        rep (j, n) {
            m = max(m, t[j] * ((i + 1) + l[j]));
        }
        cout << m << endl;
    }
    return 0;
}