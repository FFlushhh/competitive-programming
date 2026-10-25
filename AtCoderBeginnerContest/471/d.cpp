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

// struct type {
//     ll val;
//     ll offset;
//     ll push_time;
// };

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll q, v;
    cin >> q >> v;
    multiset<ll> time;
    priority_queue<tuple<ll, ll, ll>> pq;

    while (q--) {
        ll op, t;
        cin >> op >> t;

        if (op == 1) {
            ll w;
            cin >> w;

            time.emplace(t);
            pq.emplace((w - (t - *time.begin())), t - *time.begin(), t);

        } else {
            if (pq.empty()) {
                cout << -1 << endl;
            } else {
                auto [val, offset, push_time] = pq.top();
                pq.pop();
                cout << min(v, val + offset + (t - push_time)) << endl;
                time.erase(push_time);
            }
        }
    }

    return 0;
}

/*
pqっぽい
offsetで管理したい

tに関して見るか、wに関して見るか

pqにpushした時点で、大小関係は変わらない
*/