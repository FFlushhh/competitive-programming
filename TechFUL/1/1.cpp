#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int cnt = 0;
    rep (i, 4) {
        int a;
        cin >> a;
        if (a == 444) {
            ++cnt;
        }
        cout << cnt << " ";
    }
    return 0;
}