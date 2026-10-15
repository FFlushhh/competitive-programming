#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> cnt(m);
    vector<double> sum(m);
    rep(i, n) {
        int a, b;
        cin >> a >> b;
        a--;
        cnt[a]++;
        sum[a] += b;
    }
    rep(i, m) {
        double ans = sum[i] / cnt[i];
        cout << fixed << setprecision(10) << ans << endl;
    }
    return 0;
}