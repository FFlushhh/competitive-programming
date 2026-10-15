#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, d;
    cin >> n >> d;
    vector<int> t(n);
    rep(i, n) cin >> t[i];
    for (int i = 1; i < n; ++i) {
        if (t[i] - t[i - 1] <= d) {
            cout << t[i] << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}