#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    map<int, int> m;
    rep (i, 7) {
        int a;
        cin >> a;
        m[a]++;
    }
    bool ok1 = false, ok2 = false;
    for (int i = 1; i <= 13; ++i) {
        if (m[i] >= 2) {
            if (m[i] >= 3 && !ok1) {
                ok1 = true;
                continue;
            }
            if (m[i] >= 2 && !ok2) {
                ok2 = true;
                continue;
            }
        } 
    }
    if (ok1 && ok2) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }
    return 0;
}