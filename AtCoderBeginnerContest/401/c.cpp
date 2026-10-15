#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

const ll modint = 1000000000;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    rep (i, k) a.emplace_back(1);
    ll now = k;
    int idx = 0;
    int rest = n - k + 1;
    rep (i, rest) {
        a.emplace_back(now);
        now = (now * 2 - a[idx]) % modint;
        if (now < 0) now += modint;
        idx++;
    }
    cout << a.back() << endl;
    return 0;
}