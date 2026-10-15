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
    
    int q;
    cin >> q;
    deque<pair<int, int> > dq;
    while (q--) {
        int op;
        cin >> op;
        if (op == 1) {
            int c, x;
            cin >> c >> x;
            dq.emplace_back(c, x);
        } else {
            int k;
            cin >> k;
            ll ans = 0;
            while (k > 0 && !dq.empty()) {
                auto [c, x] = dq.front();
                dq.pop_front();
                if (c <= k) {
                    ans += static_cast<ll>(c) * x;
                    k -= c;
                }
                else {
                    ans += static_cast<ll>(k) * x;
                    dq.emplace_front(c - k, x);
                    k = 0;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}