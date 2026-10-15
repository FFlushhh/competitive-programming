#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> r(n);
        rep(i, n) {
            cin >> r[i];
        }
        ll ans = 0;
        int cnt = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (abs(r[i] - r[i + 1]) < 2) {
                cnt++;
                continue;
            }
            if (r[i] < r[i + 1]) {
                ans += abs(r[i] + 1 - r[i + 1]);
                r[i + 1] = r[i] + 1;
                cnt = 0;
            } else { // r[i] > r[i + 1]
                int tmp = r[i];
                r[i] = r[i] - r[i + 1] + 1;
                ans += cnt * (tmp - r[i] + 1);
            }
        }
        cout << ans << endl;
    }
    return 0;
}