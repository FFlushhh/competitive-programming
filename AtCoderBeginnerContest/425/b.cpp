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
    vector<int> a(n + 1);
    rep1(i, n) cin >> a[i];
    vector<int> ans(n + 1, -1);
    set<int> used;
    set<int> can;
    bool ok = true;
    rep1(i, n) {
        can.insert(i);
        if (a[i] != -1) {
            ans[i] = a[i];
            if (used.count(a[i])) ok = false;
            used.insert(a[i]);
        }
    }
    for (int x : used) can.erase(x);
    for (auto x : used) {
        can.erase(x);
    }
    rep1(i, n) {
        if (ans[i] == -1) {
            ans[i] = *can.begin();
            can.erase(can.begin());
        }
    }
    if (!ok) {
        cout << "No\n";
        return 0;
    } else {
        cout << "Yes\n";
        rep1(i, n) cout << ans[i] << (i == n ? '\n' : ' ');
    }
    return 0;
}