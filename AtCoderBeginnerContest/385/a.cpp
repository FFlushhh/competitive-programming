#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> a(3);
    rep (i, 3) cin >> a[i];
    int sum = 0;
    int maxval = 0;
    rep (i, 3) {
        maxval = max(maxval, a[i]);
    }
    rep (i, 3) {
        if (a[i] != maxval) {
            sum += a[i];
        }
    }
    if (sum == 0) {
        cout << "Yes" << endl;
        return 0;
    }
    if (sum == maxval) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}