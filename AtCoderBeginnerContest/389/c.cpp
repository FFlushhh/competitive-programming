#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    vector<ll> a;
    ll subs = 0;
    int idx = 0;
    a.emplace_back(0);
    rep (iq, q) {
        int type;
        cin >> type;
        if (type == 1) {
            ll l; // intでok
            cin >> l;
            a.emplace_back(l + a.back());
        }
        else if (type == 2) {
            if (idx == 0) subs += a[1];
            else subs += (a[idx + 1] - a[idx]);
            ++idx;
        }
        else {
            ll k;
            cin >> k;
            cout << a[k - 1 + idx] - subs << endl;
        }
    }
    return 0;
}

/*
方針
type == 1 累積和を取る
type == 2 原点をずらす
type == 3 累積和の指定場所の値から原点をずらした値を引いたものを出力する
*/