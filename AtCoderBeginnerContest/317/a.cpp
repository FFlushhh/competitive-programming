#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, h, x;
    cin >> n >> h >> x;
    rep (i, n) {
        int p;
        cin >> p;
        if (h + p >= x) {
            cout << i + 1 << endl;
            return 0;
        } 
    }
}