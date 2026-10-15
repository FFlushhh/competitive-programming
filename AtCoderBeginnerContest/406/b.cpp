#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<ull> a(n);
    rep(i, n) cin >> a[i];
    ull now = 1;
    ull st = 1;
    for (int i = 0; i < k; ++i) {
        st *= 10;
    }
    rep (i, n) {
        if (((long double)st / (long double)now) <= (long double)a[i]) {
            now = 1;
        } else {
            now *= a[i];
        }
    }
    if (now >= st) {
        now = 1;
    }
    cout << now << endl;
    return 0;
}