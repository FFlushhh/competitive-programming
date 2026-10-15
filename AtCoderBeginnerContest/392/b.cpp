#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> a(m);
    rep (i, m) cin >> a[i];
    sort(a.begin(), a.end());
    vector<int> b;
    int idx = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[idx] != i) b.emplace_back(i);
        else idx++;
    }
    cout << b.size() << endl;
    for (int i = 0; i < b.size(); ++i) {
        cout << b[i] << " ";
    }
    return 0;
}