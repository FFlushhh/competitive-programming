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
    
    int n, m;
    cin >> n >> m;
    vector<ll> x(n);
    rep(i, n) cin >> x[i];
    sort(x.begin(), x.end());
    vector<ll> interval(n - 1);
    rep(i, n - 1) interval[i] = x[i + 1] - x[i];
    ll ans = 0;
    ll sum = 0;
    int idx = 0;

    long double standard = (x.back() - x.front() + 1) / m;
    rep(i, n - 1) {
        if (sum + interval[i] > standard) {
            ans += sum;
            sum = 0;
        }
        sum += interval[i];
    }
    ans += sum;
    cout << ans << endl;
    return 0;
}