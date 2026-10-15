#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep (i, n) {
        a[i] = i + 1;
    }
    ll first = 0;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int p, x;
            cin >> p >> x;
            a[(p - 1 + first) % n] = x;
        }
        else if (op == 2) {
            int p;
            cin >> p;
            cout << a[(p - 1 + first) % n] << '\n';
        }
        else if (op == 3) {
            int k;
            cin >> k;
            first = (first + k) % n;
        }
    }
    return 0;
}