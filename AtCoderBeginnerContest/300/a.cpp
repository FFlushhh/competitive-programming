#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;
    cin >> n >> a >> b;
    int sum = a + b;
    rep (i, n) {
        int c;
        cin >> c;
        if (c == sum) {
            cout << i + 1 << endl;
            return 0;
        }
    }
    return 0;
}