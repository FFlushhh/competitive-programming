#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using namespace std;
using ll = long long;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int Xblack = n;
    int Yblack = 0;
    rep (i, m) {
        int x, y;
        char c;
        cin >> x >> y >> c;
        if (c == 'B') {
            max(Xblack, x);
            max(Yblack, y);
        }
        else {
            if (Xblack > x || Yblack < y) {
                cout << "No" << endl;
                return 0;
            }
            if (Xblack == x) {
                --Xblack;
            }
            if (Yblack == y) {
                --Yblack;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}