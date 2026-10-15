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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<ll> sum(n + 1, 0);
    rep(i, n) sum[i + 1] = sum[i] + a[i];
    vector<ll> 
    while (q--) {
        int l, r;
        cin >> l >> r;

    }
    return 0;
}