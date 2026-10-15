#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    char p, q;
    cin >> p >> q;
    if (p > q) swap(p, q);
    vector<int> a = {3, 1, 4, 1, 5, 9};
    vector<int> sum(7);
    rep (i, 6) sum[i + 1] = sum[i] + a[i];
    cout << sum[q - 'A'] - sum[p - 'A'] << endl;
    return 0;
}