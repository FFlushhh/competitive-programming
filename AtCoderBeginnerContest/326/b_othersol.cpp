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
    for (; n <= 919; ++n) {
        int c100 = n / 100;
        int c10 = (n % 100) / 10;
        int c1 = n % 10;
        if (c100 * c10 == c1) {
            cout << n << endl;
            return 0;
        }
    }
}