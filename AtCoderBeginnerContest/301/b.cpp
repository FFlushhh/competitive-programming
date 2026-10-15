#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> ans;
    rep (i, n) cin >> a[i];
    rep (i, n - 1) {
        if (a[i] > a[i + 1]) {
            int now = a[i];
            while (now > a[i + 1]) {
                ans.emplace_back(now);
                now--;
            }
        }
        else {
            int now = a[i];
            while (now < a[i + 1]) {
                ans.emplace_back(now);
                now++;
            }
        }
        if (i == n - 2) ans.emplace_back(a[i + 1]);
    }
    rep (i, ans.size()) cout << ans[i] << " ";
    return 0;
}