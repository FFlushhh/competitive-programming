#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if (i % 2 != 0) sum += a;
    }
    cout << sum << endl;
    return 0;
}