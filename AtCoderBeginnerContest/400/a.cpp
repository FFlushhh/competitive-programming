#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a;
    cin >> a;
    for (int i = 1; i <= 400; ++i) {
        if (a * i == 400) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}