#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    rep (i, n + 1) {
        rep (j, n + 1) {
            rep (k, n + 1) {
                if (i + j + k > n) break;
                cout << i << " " << j << " " << k << endl;
            }
        }
    }
    return 0;
}