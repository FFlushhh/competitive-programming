#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    int sum = 0;
    rep (i, n) {
        int s;
        cin >> s;
        if (s <= x) {
            sum += s;
        }
    }
    cout << sum << endl;
    return 0;
}