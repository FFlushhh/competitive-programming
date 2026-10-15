#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l;
    cin >> n >> l;
    int cnt = 0;
    rep (i, n) {
        int a;
        cin >> a;
        if (a >= l) cnt++;
    }
    cout << cnt << endl;
    return 0;
}