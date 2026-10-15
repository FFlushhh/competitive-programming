#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    sort(all(a));
    ll d = a.front() * y - a.back() * x;
    
    return 0;
}