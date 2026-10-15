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
    int sum = 0;
    rep (i, (7 * n)) {
        int a;
        cin >> a;
        sum += a;
        if ((i + 1) % 7 == 0) {
            cout << sum << endl;
            sum = 0;
        }
    }
    return 0;
}