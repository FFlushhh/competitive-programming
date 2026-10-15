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
    vector<ll> v;
    string s = "";
    rep(i, 12) {
        s += '1';
        v.emplace_back(stoll(s));
    }
    vector<ll> ans;
    rep(i, 12) {
        rep(j, 12) {
            rep(k, 12) {
                ans.emplace_back(v[i] + v[j] + v[k]);
            }
        }
    }
    sort(ans.begin(), ans.end());
    ans.erase(unique(ans.begin(), ans.end()), ans.end());
    cout << ans[n - 1] << '\n';
    return 0;
}