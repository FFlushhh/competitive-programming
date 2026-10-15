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
    int p1 = 0, mx = 0;
    rep (i, n) {
        int a;
        cin >> a;
        if (i == 0) p1 = a;
        else mx = max(mx, a);
    }
    cout << (p1 <= mx ? mx - p1 + 1 : 0) << endl;
    return 0;
}