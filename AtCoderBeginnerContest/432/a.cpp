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
    
    vector<int> v(3);
    rep(i, 3) cin >> v[i];
    int ans = 0;
    rep(i, 3) {
        rep(j, 3) {
            rep(k,3 ) {
                if (i == j || j == k || k == i) continue;
                ans = max(ans, v[i] * 100 + v[j] * 10 + v[k]);
            }
        }
    }
    cout << ans << endl;
    return 0; 
}