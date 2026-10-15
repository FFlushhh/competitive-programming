#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int M, D;
    int y, m, d;
    cin >> M >> D;
    cin >> y >> m >> d;
    ++d;
    if (d > D) {
        d = 1;
        ++m;
    }
    if (m > M) {
        m = 1;
        ++y;
    }
    cout << y << " " << m << " " << d << endl;
    return 0;
}