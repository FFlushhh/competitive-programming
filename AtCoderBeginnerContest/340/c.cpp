//TLE
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    long long ans = 0;
    long long ceil;
    long long floor;
    vector<long long> a;
    cin >> n;
    a.emplace_back(n);
    rep (i, a.size()) {
        if (a[i] < 2) {
            a.erase(a.begin() + i);
            i -= 1;
        }
        else {
            if (a[i] % 2 == 0) {
                ceil = a[i] / 2;
                floor = a[i] / 2;
            }
            else {
                ceil = (a[i] + 2 - 1) / 2;
                floor = a[i] / 2;
            }
            ans += a[i];
            a[i] = ceil;
            a.emplace_back(floor);
            i -= 1;
        }
    }
    cout << ans << endl;
    return 0;
}