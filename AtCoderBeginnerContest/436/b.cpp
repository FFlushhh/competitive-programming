#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<vector<int> > a(n, vector<int>(n, -1));
    int r = 0, c = (n - 1) / 2;
    int k = 1;
    a[r][c] = k;
    while (true) {
        ++k;
        if (a[abs((r - 1) % n - 1)][abs((c + 1) % n - 1)] == -1) {
            a[abs((r - 1) % n - 1)][abs((c + 1) % n - 1)] = k;
            r = abs((r - 1) % n - 1);
            c = abs((c + 1) % n - 1);
        } else {
            a[abs((r + 1) % n - 1)][c] = k;
            r = abs((r + 1) % n - 1);
        }
        bool ok = true;
        rep(i, n) rep(j, n) if (a[i][j] == -1) ok = false;
        if (ok) break;
    }
    rep(i, n) {
        rep(j, n) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}