#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    vector<string> grid(8);
    rep (i, 8) cin >> grid[i];
    rep (i, 8) {
        rep (j, 8) {
            if (grid[i][j] == '*') {
                cout << (char)('a' + j) << 8 - i << endl;
                return 0;
            }
        }
    }
    return 0;
}