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
    
    int t;
    cin >> t;
    while (t--) {
        ll x, y, r, xx, yy, rr;
        cin >> x >> y >> r >> xx >> yy >> rr;
        ll rplus = r + rr;
        ll rminus = abs(r - rr);
        ll xyd = abs(x - xx) * abs(x - xx) + abs(y - yy) * abs(y - yy);
        if (rminus * rminus <= xyd && rplus * rplus >= xyd) Yes;
        else No;
    }
    return 0;
}