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
    
    int m, d;
    cin >> m >> d;
    bool ok = false;
    if (m == 1 && d == 7) {
        ok = true;
    } else {
        for (int i = 3; i <= 9; i += 2) {
            if (m == i && m == d) {
                ok = true;
            }
        }
    }
    if (ok) Yes;
    else No;
    return 0;
}