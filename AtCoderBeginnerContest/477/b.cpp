#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
#define rrep1(i, n) for (int i = (int)(n); i >= 1; --i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, d;
    cin >> n >> d;
    vector<int> x(n);
    rep(i, n) cin >> x[i];

    vector<int> ans;
    rep(i, n) {
        bool ok = true;
        rep(j, n) {
            if (i == j) continue;
            if (abs(x[i] - x[j]) < d) {
                ok = false;
                break;
            }
        }

        if (ok) ans.emplace_back(i);
    }

    cout << ans.size() << endl;
    for (int p : ans) {
        cout << p + 1 << " ";
    }
    cout << endl;
    return 0;
}