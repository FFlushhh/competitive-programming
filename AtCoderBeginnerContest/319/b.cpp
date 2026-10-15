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
    for (int i = 0; i <= n; ++i) {
        for (int j = 1; j <= 9; ++j) {
            if (n % j == 0 && i % (n / j) == 0) {
                cout << j;
                break;
            }
            if (j == 9) cout << "-";
        }
    }
    return 0;
}