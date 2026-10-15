#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int m;
    cin >> m;
    vector<int> d(m);
    int s = 0;
    rep (i, m) {
        cin >> d[i];
        s += d[i];
    }
    vector<int> sum(m + 1);
    rep (i, m) sum[i + 1] = sum[i] + d[i];
    int mid = (s + 1) / 2;
    rep (i, m) {
        if (sum[i + 1] >= mid) {
            cout << i + 1 << " " << mid - sum[i] << endl;
            return 0;
        }
    }
    return 0;
}