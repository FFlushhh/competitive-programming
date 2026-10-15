#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<pair<int, string> > p(n);
    int idx = 0;
    rep (i, n) {
        cin >> p[i].second >> p[i].first;
        if (p[idx] > p[i]) idx = i;
    }
    for (int i = idx; i < n; ++i) cout << p[i].second << endl;
    for (int i = 0; i < idx; ++i) cout << p[i].second << endl;
    return 0;
}