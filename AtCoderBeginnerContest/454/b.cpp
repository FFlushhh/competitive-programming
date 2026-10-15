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
    
    int n, m;
    cin >> n >> m;
    vector<int> f(n);
    rep(i, n) cin >> f[i];
    vector<bool> used(m);
    bool ok1 = true;
    rep(i, n) {
        if (used[f[i] - 1]) ok1 = false;
        used[f[i] - 1] = true;
    }
    bool ok2 = true;
    rep(i, m) {
        if (!used[i]) ok2 = false;
    }
    if (ok1) Yes;
    else No;
    if (ok2) Yes;
    else No;
    return 0;
}