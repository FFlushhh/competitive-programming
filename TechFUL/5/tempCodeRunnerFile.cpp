#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> s(n);
    rep(i, n) cin >> s[i];
    int ans = 0;
    sort(s.begin(), s.end(), greater<int>());
    ans += (s[0] + s.size() - 1);
    cout << ans << endl;
    return 0;
}