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
    vector<int> x(n * 5);
    rep(i, n * 5) cin >> x[i];
    sort(x.begin(), x.end());
    int sum = accumulate(x.begin() + n, x.end() - n, 0);
    cout << fixed << setprecision(10) << (double)sum / (3 * n) << endl;
    return 0;
}