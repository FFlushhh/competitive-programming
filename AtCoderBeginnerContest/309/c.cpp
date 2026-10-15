#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> ab(n);
    ll sum = 0;
    rep (i, n) {
        cin >> ab[i].first >> ab[i].second;
        sum += ab[i].second;
    }
    sort(ab.begin(), ab.end());
    if (sum > k) {
        rep (i, n) {
            sum -= ab[i].second;
            if (sum <= k) {
                cout << ab[i].first + 1 << endl;
                return 0;
            }
        }
    }
    else cout << 1 << endl;
    return 0;
}