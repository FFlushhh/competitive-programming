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
    vector<int> h(n);
    rep(i, n) cin >> h[i];
    int ans = 1;
    rep (i, n) {
        for (int j = i + 1; j < n; ++j) {
            if (h[i] == h[j]) {
                int cnt = 2;
                int interval = j - i;
                for (int k = j + interval; k < n; k += interval) {
                    if (h[k] == h[i]) {
                        ++cnt;
                    } else {
                        break;
                    }
                }
                ans = max(ans, cnt);
            }
        }
    }
    cout << ans << endl;
    return 0;
}