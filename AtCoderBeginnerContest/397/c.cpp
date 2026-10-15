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
    rep (i, n) cin >> a[i];
    map<int, int> mp;
    rep (i, n) mp[a[i]]++;
    int ans = 0;
    int m = mp.size();
    int cnt = 0;
    set<int> st;
    for (int i = 0; i < n - 1; ++i) {
        int tmp = m;
        mp[a[i]]--;
        if (mp[a[i]] > 0) {
            cnt++;
            if (st.contains(a[i])) {
                cnt--;  
            }
            st.insert(a[i]);
        }
        else {
            if (st.contains(a[i])) {
                cnt--;
                st.erase(a[i]);
            }
        }
        ans = max(ans, tmp + cnt);
    }
    cout << ans << endl;
    return 0;
}