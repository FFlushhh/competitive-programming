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
    
    string s;
    cin >> s;
    int n = s.size();
    vector<int> a(n);
    vector<int> b(n);
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] + 1 == s[i]) {
            a[i] = 1;
        }
        if (s[i - 1] != s[i]) b[i] += 1;
    }
    rep(i, n - 1) b[i + 1] += b[i];
    ll ans = 0;
    for (int i = 1; i < n; ++i) {
        if (a[i] == 1) {
            int idx1 = lower_bound(b.begin(), b.end(), b[i - 1]) - b.begin();
            int idx2 = upper_bound(b.begin(), b.end(), b[i]) - b.begin();
            ans += min(i - idx1, idx2 - i);
        }
    }
    cout <<ans << endl;
    return 0;
}