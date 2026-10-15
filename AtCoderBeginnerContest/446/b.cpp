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
    set<int> s;
    // rep1(i, m) {
    //     s.insert(i);
    // }
    rep(i, n) {
        int l;
        cin >> l;
        vector<int> x(l);
        rep(i, l) cin >> x[i];
        // sort(all(x));
        bool ok = false;
        rep(i, l) {
            if (!s.count(x[i])) {
                cout << x[i] << endl;
                s.insert(x[i]);
                ok = true;
                break;
            }
        }
        if (!ok) cout << 0 << endl;
    }
    return 0;
}