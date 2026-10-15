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
    int ans = 0;
    unordered_map<int, int> mp;
    rep (i, n) {
        int a;
        cin >> a;
        mp[a]++;
        if (mp[a] == 2) {
            ans++;
            mp[a] = 0;
        }
    }
    cout << ans << endl;
    return 0;
}