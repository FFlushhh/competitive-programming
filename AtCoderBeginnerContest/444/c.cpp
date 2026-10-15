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
    
    int n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    long long ans = 0;
    for (int i = 0; i < n - k - 1; ++i) {
        for (int j = 0; j < k; ++j) {
            ans += a[i + j - 1]; // n - k - 1 + k - 1
            cout << a[i] << " " << a[i + j - 1] << endl;
        }
    }
    cout << ans << endl;
    return 0;
}