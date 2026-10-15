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
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> imos(n + 1, 0);
    rep(i, n) {
        int have = a[i] + imos[i];
        if (have > 0) {
            imos[i + 1]++;
            int use = min(i + have, n - 1);
            imos[use + 1]--;
        }
        imos[i + 1] += imos[i];
    }
    rep(i, n) {
        int ans = a[i] + imos[i] - (n - i - 1);
        cout << (ans >= 0 ? ans : 0) << (i == n - 1 ? '\n' : ' ');
    }
    return 0;
}