#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector<int> p(n);
    vector<set<int> > f(n);
    rep (i, n) {
        int c;
        cin >> p[i] >> c;
        rep (j, c) {
            int x;
            cin >> x;
            f[i].insert(x);
        }
    }
    rep (i, n) {
        rep (j, n) {
            if (i == j) continue;
            if (p[i] < p[j]) continue;
            if (f[i].size() > f[j].size()) continue;
            bool ok = true;
            for (int x : f[i]) {
                if (!f[j].count(x)) ok = false;
            }
            if (ok && (p[i] > p[j] || f[i].size() < f[j].size())) {
                cout << "Yes" << endl;
                return 0;
            } 
        }
    }
    cout << "No" << endl;
    return 0;
}