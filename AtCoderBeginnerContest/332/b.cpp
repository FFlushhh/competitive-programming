#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k, g, m;
    cin >> k >> g >> m;
    int nowG = 0;
    int nowM = 0;
    rep (i, k) {
        if (nowG == g) nowG = 0;
        else if (nowM == 0) nowM = m;
        else {
            if (nowM > g - nowG) {
                nowM -= g - nowG;
                nowG = g;
            }
            else {
                nowG += nowM;
                nowM = 0;
            }
        }
    }
    cout << nowG << " " << nowM << endl;
    return 0;
}