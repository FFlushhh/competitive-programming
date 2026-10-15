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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) {
        cin >> a[i];
        a[i]--;
    };
    vector<int> cnt(k, 0);
    rep(i, n) {
        cnt[a[i]]++;
    }
    vector<int> scnt = cnt;
    sort(all(scnt));
    int ans = 0;
    rep(i, k) {
        int x = cnt[i] + 1;
        // cout << x << endl;
        auto it = upper_bound(all(scnt), x);
        if (it == scnt.end()) ans++;
    }
    cout << ans << endl;
    return 0;
}