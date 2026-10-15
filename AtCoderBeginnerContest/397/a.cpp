#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ull = unsigned long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n;
    cin >> n;
    if (n >= 38.0) {
        cout << 1 << endl;
    }
    else if (n >= 37.5) {
        cout << 2 << endl;
    }
    else {
        cout << 3 << endl;
    }
    return 0;
}