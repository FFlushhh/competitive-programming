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
    
    int n, q;
    cin >> n >> q;
    vector<ll> sum(n + 1);
    rep1(i, n) sum[i] = 1;
    int idx = 0;
    while (q--) {
        int x, y;
        cin >> x >> y;
        ll s = 0;
        for (int i = idx; i <= x; ++i) {
            if (i <= n) s += sum[i];
        }
        cout << s << endl;
        sum[y] += s;
        if (s != 0) idx = x + 1;
    }
    return 0;
}