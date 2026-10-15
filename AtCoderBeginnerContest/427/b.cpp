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
    
    int n;
    cin >> n;
    ll ans = 0;
    ll now = 1;
    for (int i = 1; i <= n; ++i) {
        string tmp = to_string(now);
        ll val = 0;
        while (!tmp.empty()) {
            val += (tmp.back() - '0');
            tmp.pop_back();
        }
        ans += val;
        now = ans;
    }
    cout << ans << endl;
    return 0;
}