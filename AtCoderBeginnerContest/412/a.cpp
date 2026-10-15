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
    int ans = 0;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        if (a < b) ++ans;
    }
    cout << ans << endl;
    return 0;
}