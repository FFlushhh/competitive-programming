#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, y;
    cin >> x >> y;
    if (y - x >= -3 && y - x <= 2) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}